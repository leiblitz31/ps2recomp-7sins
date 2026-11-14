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

// Function: sub_00277090
// Address: 0x277090 - 0x277660
void sub_00277090_0x277090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277090_0x277090");
#endif

    switch (ctx->pc) {
        case 0x2770a8u: goto label_2770a8;
        case 0x2770f8u: goto label_2770f8;
        case 0x277148u: goto label_277148;
        case 0x277164u: goto label_277164;
        case 0x277184u: goto label_277184;
        case 0x2771bcu: goto label_2771bc;
        case 0x2771ccu: goto label_2771cc;
        case 0x2771e4u: goto label_2771e4;
        case 0x2771fcu: goto label_2771fc;
        case 0x277234u: goto label_277234;
        case 0x277244u: goto label_277244;
        case 0x27725cu: goto label_27725c;
        case 0x2772bcu: goto label_2772bc;
        case 0x2772dcu: goto label_2772dc;
        case 0x27730cu: goto label_27730c;
        case 0x27734cu: goto label_27734c;
        case 0x27735cu: goto label_27735c;
        case 0x27736cu: goto label_27736c;
        case 0x27737cu: goto label_27737c;
        case 0x277394u: goto label_277394;
        case 0x2773d8u: goto label_2773d8;
        case 0x277408u: goto label_277408;
        case 0x277420u: goto label_277420;
        case 0x27743cu: goto label_27743c;
        case 0x277488u: goto label_277488;
        case 0x27749cu: goto label_27749c;
        case 0x2774acu: goto label_2774ac;
        case 0x2774d8u: goto label_2774d8;
        case 0x2774f0u: goto label_2774f0;
        case 0x277500u: goto label_277500;
        case 0x277510u: goto label_277510;
        case 0x277524u: goto label_277524;
        case 0x277534u: goto label_277534;
        case 0x277544u: goto label_277544;
        case 0x27755cu: goto label_27755c;
        case 0x2775bcu: goto label_2775bc;
        case 0x2775dcu: goto label_2775dc;
        case 0x27762cu: goto label_27762c;
        case 0x27764cu: goto label_27764c;
        default: break;
    }

    ctx->pc = 0x277090u;

    // 0x277090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x277090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x277094: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x277094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x277098: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x277098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27709c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27709cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2770a0: 0xc09d130  jal         func_2744C0
    ctx->pc = 0x2770A0u;
    SET_GPR_U32(ctx, 31, 0x2770A8u);
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x2770A0u, 0x2770A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2770A8u;
label_2770a8:
    // 0x2770a8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2770a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2770ac: 0x24635e10  addiu       $v1, $v1, 0x5E10
    ctx->pc = 0x2770acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24080));
    // 0x2770b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2770b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2770b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2770b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2770b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2770b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2770bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2770bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2770c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2770c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2770c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2770C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2770C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2770CCu;
    // 0x2770cc: 0x0  nop
    ctx->pc = 0x2770ccu;
    // NOP
    // 0x2770d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2770d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2770d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2770d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2770d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2770d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2770dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2770dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2770e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2770e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2770e4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2770e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2770e8: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x2770e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x2770ec: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2770ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2770f0: 0xc09d248  jal         func_274920
    ctx->pc = 0x2770F0u;
    SET_GPR_U32(ctx, 31, 0x2770F8u);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x2770F0u, 0x2770F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2770F8u;
label_2770f8:
    // 0x2770f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2770f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2770fc: 0x10430053  beq         $v0, $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x2770FCu;
    {
        const bool branch_taken_0x2770fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2770fc) {
            ctx->pc = 0x27724Cu;
            goto label_27724c;
        }
    }
    ctx->pc = 0x277104u;
    // 0x277104: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x277104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x277108: 0x10430054  beq         $v0, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x277108u;
    {
        const bool branch_taken_0x277108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x277108) {
            ctx->pc = 0x27725Cu;
            goto label_27725c;
        }
    }
    ctx->pc = 0x277110u;
    // 0x277110: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x277110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277114: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x277114u;
    {
        const bool branch_taken_0x277114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x277114) {
            ctx->pc = 0x277124u;
            goto label_277124;
        }
    }
    ctx->pc = 0x27711Cu;
    // 0x27711c: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x27711Cu;
    {
        const bool branch_taken_0x27711c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27711c) {
            ctx->pc = 0x27725Cu;
            goto label_27725c;
        }
    }
    ctx->pc = 0x277124u;
label_277124:
    // 0x277124: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x277124u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277128: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x277128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27712c: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x27712cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x277130: 0x14020007  bne         $zero, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x277130u;
    {
        const bool branch_taken_0x277130 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x277130) {
            ctx->pc = 0x277150u;
            goto label_277150;
        }
    }
    ctx->pc = 0x277138u;
    // 0x277138: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x277138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27713c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x27713cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x277140: 0xc09d250  jal         func_274940
    ctx->pc = 0x277140u;
    SET_GPR_U32(ctx, 31, 0x277148u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x277140u, 0x277148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277148u;
label_277148:
    // 0x277148: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x277148u;
    {
        const bool branch_taken_0x277148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277148) {
            ctx->pc = 0x27725Cu;
            goto label_27725c;
        }
    }
    ctx->pc = 0x277150u;
label_277150:
    // 0x277150: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x277150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x277154: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x277154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x277158: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x277158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x27715c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27715Cu;
    SET_GPR_U32(ctx, 31, 0x277164u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27715Cu, 0x277164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277164u;
label_277164:
    // 0x277164: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x277164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277168: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x277168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27716c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x27716cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x277170: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x277170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x277174: 0x24a5d2b8  addiu       $a1, $a1, -0x2D48
    ctx->pc = 0x277174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955704));
    // 0x277178: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x277178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x27717c: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x27717Cu;
    SET_GPR_U32(ctx, 31, 0x277184u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x27717Cu, 0x277184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277184u;
label_277184:
    // 0x277184: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x277184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277188: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x277188u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x27718c: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x27718Cu;
    {
        const bool branch_taken_0x27718c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27718c) {
            ctx->pc = 0x277234u;
            goto label_277234;
        }
    }
    ctx->pc = 0x277194u;
    // 0x277194: 0x2a010012  slti        $at, $s0, 0x12
    ctx->pc = 0x277194u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x277198: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x277198u;
    {
        const bool branch_taken_0x277198 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x277198) {
            ctx->pc = 0x277234u;
            goto label_277234;
        }
    }
    ctx->pc = 0x2771A0u;
    // 0x2771a0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2771a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2771a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2771a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2771a8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2771a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2771ac: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2771acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2771b0: 0x24a5d2d0  addiu       $a1, $a1, -0x2D30
    ctx->pc = 0x2771b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955728));
    // 0x2771b4: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x2771B4u;
    SET_GPR_U32(ctx, 31, 0x2771BCu);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x2771B4u, 0x2771BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2771BCu;
label_2771bc:
    // 0x2771bc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2771bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2771c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2771c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2771c4: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2771C4u;
    SET_GPR_U32(ctx, 31, 0x2771CCu);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2771C4u, 0x2771CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2771CCu;
label_2771cc:
    // 0x2771cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2771ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2771d0: 0xc7b4005c  lwc1        $f20, 0x5C($sp)
    ctx->pc = 0x2771d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2771d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2771d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2771d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2771d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2771dc: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2771DCu;
    SET_GPR_U32(ctx, 31, 0x2771E4u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2771DCu, 0x2771E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2771E4u;
label_2771e4:
    // 0x2771e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2771e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2771e8: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2771e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2771ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2771ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2771f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2771f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2771f4: 0xc0980d0  jal         func_260340
    ctx->pc = 0x2771F4u;
    SET_GPR_U32(ctx, 31, 0x2771FCu);
    ctx->pc = 0x260340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260340u, 0x2771F4u, 0x2771FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2771FCu;
label_2771fc:
    // 0x2771fc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2771fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x277200: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277204: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x277204u;
    {
        const bool branch_taken_0x277204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x277204) {
            ctx->pc = 0x277234u;
            goto label_277234;
        }
    }
    ctx->pc = 0x27720Cu;
    // 0x27720c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x27720cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x277210: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x277210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x277214: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x277214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x277218: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x277218u;
    {
        const bool branch_taken_0x277218 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x277218) {
            ctx->pc = 0x277234u;
            goto label_277234;
        }
    }
    ctx->pc = 0x277220u;
    // 0x277220: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x277220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277224: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x277224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277228: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x277228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27722c: 0xc0980bc  jal         func_2602F0
    ctx->pc = 0x27722Cu;
    SET_GPR_U32(ctx, 31, 0x277234u);
    ctx->pc = 0x2602F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2602F0u, 0x27722Cu, 0x277234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277234u;
label_277234:
    // 0x277234: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x277234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x277238: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x277238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27723c: 0xc09d250  jal         func_274940
    ctx->pc = 0x27723Cu;
    SET_GPR_U32(ctx, 31, 0x277244u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x27723Cu, 0x277244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277244u;
label_277244:
    // 0x277244: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x277244u;
    {
        const bool branch_taken_0x277244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277244) {
            ctx->pc = 0x27725Cu;
            goto label_27725c;
        }
    }
    ctx->pc = 0x27724Cu;
label_27724c:
    // 0x27724c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x27724cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x277250: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x277250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x277254: 0xc09d250  jal         func_274940
    ctx->pc = 0x277254u;
    SET_GPR_U32(ctx, 31, 0x27725Cu);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x277254u, 0x27725Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27725Cu;
label_27725c:
    // 0x27725c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27725cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x277260: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x277260u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x277264: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x277264u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277268: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x277268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27726c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27726cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x277270: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x277270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x277274: 0x3e00008  jr          $ra
    ctx->pc = 0x277274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27727Cu;
    // 0x27727c: 0x0  nop
    ctx->pc = 0x27727cu;
    // NOP
    // 0x277280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x277280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x277284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x277284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x277288: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x277288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27728c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x27728cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x277290: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x277290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277294: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x277294u;
    {
        const bool branch_taken_0x277294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x277294) {
            ctx->pc = 0x2772DCu;
            goto label_2772dc;
        }
    }
    ctx->pc = 0x27729Cu;
    // 0x27729c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x27729cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2772a0: 0x24635e10  addiu       $v1, $v1, 0x5E10
    ctx->pc = 0x2772a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24080));
    // 0x2772a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2772a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2772a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2772a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2772ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2772acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2772b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2772b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2772b4: 0xc09d150  jal         func_274540
    ctx->pc = 0x2772B4u;
    SET_GPR_U32(ctx, 31, 0x2772BCu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x2772B4u, 0x2772BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2772BCu;
label_2772bc:
    // 0x2772bc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2772bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2772c0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2772c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2772c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2772c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2772c8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2772C8u;
    {
        const bool branch_taken_0x2772c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2772c8) {
            ctx->pc = 0x2772DCu;
            goto label_2772dc;
        }
    }
    ctx->pc = 0x2772D0u;
    // 0x2772d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2772d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2772d4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2772D4u;
    SET_GPR_U32(ctx, 31, 0x2772DCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2772D4u, 0x2772DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2772DCu;
label_2772dc:
    // 0x2772dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2772dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2772e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2772e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2772e4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2772e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2772e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2772E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2772E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2772F0u;
    // 0x2772f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2772f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2772f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2772f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2772f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2772f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2772fc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2772fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x277300: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x277300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277304: 0xc09d248  jal         func_274920
    ctx->pc = 0x277304u;
    SET_GPR_U32(ctx, 31, 0x27730Cu);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x277304u, 0x27730Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27730Cu;
label_27730c:
    // 0x27730c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x27730cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x277310: 0x1043001c  beq         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x277310u;
    {
        const bool branch_taken_0x277310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x277310) {
            ctx->pc = 0x277384u;
            goto label_277384;
        }
    }
    ctx->pc = 0x277318u;
    // 0x277318: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x277318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27731c: 0x1043001d  beq         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x27731Cu;
    {
        const bool branch_taken_0x27731c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27731c) {
            ctx->pc = 0x277394u;
            goto label_277394;
        }
    }
    ctx->pc = 0x277324u;
    // 0x277324: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x277324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277328: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x277328u;
    {
        const bool branch_taken_0x277328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x277328) {
            ctx->pc = 0x277338u;
            goto label_277338;
        }
    }
    ctx->pc = 0x277330u;
    // 0x277330: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x277330u;
    {
        const bool branch_taken_0x277330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277330) {
            ctx->pc = 0x277394u;
            goto label_277394;
        }
    }
    ctx->pc = 0x277338u;
label_277338:
    // 0x277338: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x277338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27733c: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x27733cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x277340: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x277340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x277344: 0xc085538  jal         func_2154E0
    ctx->pc = 0x277344u;
    SET_GPR_U32(ctx, 31, 0x27734Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x277344u, 0x27734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27734Cu;
label_27734c:
    // 0x27734c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27734cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277350: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x277350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x277354: 0xc041874  jal         func_1061D0
    ctx->pc = 0x277354u;
    SET_GPR_U32(ctx, 31, 0x27735Cu);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x277354u, 0x27735Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27735Cu;
label_27735c:
    // 0x27735c: 0x8f84bcb0  lw          $a0, -0x4350($gp)
    ctx->pc = 0x27735cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950064)));
    // 0x277360: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x277360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277364: 0xc0b16f8  jal         func_2C5BE0
    ctx->pc = 0x277364u;
    SET_GPR_U32(ctx, 31, 0x27736Cu);
    ctx->pc = 0x2C5BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5BE0u, 0x277364u, 0x27736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27736Cu;
label_27736c:
    // 0x27736c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x27736cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277370: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x277370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x277374: 0xc09d250  jal         func_274940
    ctx->pc = 0x277374u;
    SET_GPR_U32(ctx, 31, 0x27737Cu);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x277374u, 0x27737Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27737Cu;
label_27737c:
    // 0x27737c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27737Cu;
    {
        const bool branch_taken_0x27737c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27737c) {
            ctx->pc = 0x277394u;
            goto label_277394;
        }
    }
    ctx->pc = 0x277384u;
label_277384:
    // 0x277384: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x277384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277388: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x277388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27738c: 0xc09d250  jal         func_274940
    ctx->pc = 0x27738Cu;
    SET_GPR_U32(ctx, 31, 0x277394u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x27738Cu, 0x277394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277394u;
label_277394:
    // 0x277394: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x277394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277398: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x277398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27739c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27739cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2773a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2773A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2773A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2773A8u;
    // 0x2773a8: 0x0  nop
    ctx->pc = 0x2773a8u;
    // NOP
    // 0x2773ac: 0x0  nop
    ctx->pc = 0x2773acu;
    // NOP
    // 0x2773b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2773b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2773b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2773b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2773b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2773b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2773bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2773bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2773c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2773c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2773c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2773c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2773c8: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x2773c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x2773cc: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2773ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2773d0: 0xc09d248  jal         func_274920
    ctx->pc = 0x2773D0u;
    SET_GPR_U32(ctx, 31, 0x2773D8u);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x2773D0u, 0x2773D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2773D8u;
label_2773d8:
    // 0x2773d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2773d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2773dc: 0x1043005b  beq         $v0, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x2773DCu;
    {
        const bool branch_taken_0x2773dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2773dc) {
            ctx->pc = 0x27754Cu;
            goto label_27754c;
        }
    }
    ctx->pc = 0x2773E4u;
    // 0x2773e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2773e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2773e8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2773E8u;
    {
        const bool branch_taken_0x2773e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2773e8) {
            ctx->pc = 0x2773F8u;
            goto label_2773f8;
        }
    }
    ctx->pc = 0x2773F0u;
    // 0x2773f0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2773F0u;
    {
        const bool branch_taken_0x2773f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2773f0) {
            ctx->pc = 0x27755Cu;
            goto label_27755c;
        }
    }
    ctx->pc = 0x2773F8u;
label_2773f8:
    // 0x2773f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2773f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2773fc: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2773fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x277400: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x277400u;
    SET_GPR_U32(ctx, 31, 0x277408u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x277400u, 0x277408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277408u;
label_277408:
    // 0x277408: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x277408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27740c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x27740cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x277410: 0x24a5d2e8  addiu       $a1, $a1, -0x2D18
    ctx->pc = 0x277410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955752));
    // 0x277414: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x277414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277418: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x277418u;
    SET_GPR_U32(ctx, 31, 0x277420u);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x277418u, 0x277420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277420u;
label_277420:
    // 0x277420: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x277420u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x277424: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x277424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x277428: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x277428u;
    {
        const bool branch_taken_0x277428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x277428) {
            ctx->pc = 0x27745Cu;
            goto label_27745c;
        }
    }
    ctx->pc = 0x277430u;
    // 0x277430: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x277430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x277434: 0xc09d234  jal         func_2748D0
    ctx->pc = 0x277434u;
    SET_GPR_U32(ctx, 31, 0x27743Cu);
    ctx->pc = 0x2748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2748D0u, 0x277434u, 0x27743Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27743Cu;
label_27743c:
    // 0x27743c: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x27743cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x277440: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x277440u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x277444: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x277444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x277448: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x277448u;
    {
        const bool branch_taken_0x277448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x277448) {
            ctx->pc = 0x277460u;
            goto label_277460;
        }
    }
    ctx->pc = 0x277450u;
    // 0x277450: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x277450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277454: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x277454u;
    {
        const bool branch_taken_0x277454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277454) {
            ctx->pc = 0x277460u;
            goto label_277460;
        }
    }
    ctx->pc = 0x27745Cu;
label_27745c:
    // 0x27745c: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x27745cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_277460:
    // 0x277460: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x277460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x277464: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x277464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x277468: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x277468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x27746c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27746cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x277470: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x277470u;
    {
        const bool branch_taken_0x277470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x277470) {
            ctx->pc = 0x27747Cu;
            goto label_27747c;
        }
    }
    ctx->pc = 0x277478u;
    // 0x277478: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x277478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27747c:
    // 0x27747c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x27747cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x277480: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x277480u;
    SET_GPR_U32(ctx, 31, 0x277488u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x277480u, 0x277488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277488u;
label_277488:
    // 0x277488: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x277488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27748c: 0x240504a6  addiu       $a1, $zero, 0x4A6
    ctx->pc = 0x27748cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1190));
    // 0x277490: 0x2786a1fc  addiu       $a2, $gp, -0x5E04
    ctx->pc = 0x277490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943228));
    // 0x277494: 0xc041a50  jal         func_106940
    ctx->pc = 0x277494u;
    SET_GPR_U32(ctx, 31, 0x27749Cu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x277494u, 0x27749Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27749Cu;
label_27749c:
    // 0x27749c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27749cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2774a0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2774a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2774a4: 0xc0495d4  jal         func_125750
    ctx->pc = 0x2774A4u;
    SET_GPR_U32(ctx, 31, 0x2774ACu);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x2774A4u, 0x2774ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2774ACu;
label_2774ac:
    // 0x2774ac: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x2774acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2774b0: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x2774b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2774b4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2774b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2774b8: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x2774b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2774bc: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2774BCu;
    {
        const bool branch_taken_0x2774bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2774bc) {
            ctx->pc = 0x2774E0u;
            goto label_2774e0;
        }
    }
    ctx->pc = 0x2774C4u;
    // 0x2774c4: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x2774c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x2774c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2774c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2774cc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2774ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2774d0: 0xc08e514  jal         func_239450
    ctx->pc = 0x2774D0u;
    SET_GPR_U32(ctx, 31, 0x2774D8u);
    ctx->pc = 0x239450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239450u, 0x2774D0u, 0x2774D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2774D8u;
label_2774d8:
    // 0x2774d8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2774D8u;
    {
        const bool branch_taken_0x2774d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2774d8) {
            ctx->pc = 0x277510u;
            goto label_277510;
        }
    }
    ctx->pc = 0x2774E0u;
label_2774e0:
    // 0x2774e0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2774e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2774e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2774e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2774e8: 0xc040304  jal         func_100C10
    ctx->pc = 0x2774E8u;
    SET_GPR_U32(ctx, 31, 0x2774F0u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2774E8u, 0x2774F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2774F0u;
label_2774f0:
    // 0x2774f0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2774f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2774f4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2774f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2774f8: 0xc1195a4  jal         func_465690
    ctx->pc = 0x2774F8u;
    SET_GPR_U32(ctx, 31, 0x277500u);
    ctx->pc = 0x465690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465690u, 0x2774F8u, 0x277500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277500u;
label_277500:
    // 0x277500: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x277500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x277504: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x277504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x277508: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x277508u;
    SET_GPR_U32(ctx, 31, 0x277510u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x277508u, 0x277510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277510u;
label_277510:
    // 0x277510: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x277510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277514: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x277514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277518: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x277518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27751c: 0xc08d69c  jal         func_235A70
    ctx->pc = 0x27751Cu;
    SET_GPR_U32(ctx, 31, 0x277524u);
    ctx->pc = 0x235A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A70u, 0x27751Cu, 0x277524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277524u;
label_277524:
    // 0x277524: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x277524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x277528: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x277528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27752c: 0xc09d250  jal         func_274940
    ctx->pc = 0x27752Cu;
    SET_GPR_U32(ctx, 31, 0x277534u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x27752Cu, 0x277534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277534u;
label_277534:
    // 0x277534: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x277534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x277538: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x277538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27753c: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x27753Cu;
    SET_GPR_U32(ctx, 31, 0x277544u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x27753Cu, 0x277544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277544u;
label_277544:
    // 0x277544: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x277544u;
    {
        const bool branch_taken_0x277544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277544) {
            ctx->pc = 0x27755Cu;
            goto label_27755c;
        }
    }
    ctx->pc = 0x27754Cu;
label_27754c:
    // 0x27754c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x27754cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x277550: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x277550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x277554: 0xc09d250  jal         func_274940
    ctx->pc = 0x277554u;
    SET_GPR_U32(ctx, 31, 0x27755Cu);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x277554u, 0x27755Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27755Cu;
label_27755c:
    // 0x27755c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27755cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x277560: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x277560u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x277564: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x277564u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277568: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x277568u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27756c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27756cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277570: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x277570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x277574: 0x3e00008  jr          $ra
    ctx->pc = 0x277574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27757Cu;
    // 0x27757c: 0x0  nop
    ctx->pc = 0x27757cu;
    // NOP
    // 0x277580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x277580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x277584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x277584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x277588: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x277588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27758c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x27758cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x277590: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x277590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277594: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x277594u;
    {
        const bool branch_taken_0x277594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x277594) {
            ctx->pc = 0x2775DCu;
            goto label_2775dc;
        }
    }
    ctx->pc = 0x27759Cu;
    // 0x27759c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x27759cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2775a0: 0x24635e50  addiu       $v1, $v1, 0x5E50
    ctx->pc = 0x2775a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24144));
    // 0x2775a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2775a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2775a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2775a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2775ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2775acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2775b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2775b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2775b4: 0xc09d150  jal         func_274540
    ctx->pc = 0x2775B4u;
    SET_GPR_U32(ctx, 31, 0x2775BCu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x2775B4u, 0x2775BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2775BCu;
label_2775bc:
    // 0x2775bc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2775bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2775c0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2775c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2775c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2775c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2775c8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2775C8u;
    {
        const bool branch_taken_0x2775c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2775c8) {
            ctx->pc = 0x2775DCu;
            goto label_2775dc;
        }
    }
    ctx->pc = 0x2775D0u;
    // 0x2775d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2775d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2775d4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2775D4u;
    SET_GPR_U32(ctx, 31, 0x2775DCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2775D4u, 0x2775DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2775DCu;
label_2775dc:
    // 0x2775dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2775dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2775e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2775e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2775e4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2775e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2775e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2775E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2775E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2775F0u;
    // 0x2775f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2775f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2775f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2775f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2775f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2775f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2775fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2775fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x277600: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x277600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277604: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x277604u;
    {
        const bool branch_taken_0x277604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x277604) {
            ctx->pc = 0x27764Cu;
            goto label_27764c;
        }
    }
    ctx->pc = 0x27760Cu;
    // 0x27760c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x27760cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x277610: 0x24635e90  addiu       $v1, $v1, 0x5E90
    ctx->pc = 0x277610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24208));
    // 0x277614: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x277614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277618: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x277618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x27761c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27761cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277620: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x277620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277624: 0xc09d150  jal         func_274540
    ctx->pc = 0x277624u;
    SET_GPR_U32(ctx, 31, 0x27762Cu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x277624u, 0x27762Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27762Cu;
label_27762c:
    // 0x27762c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x27762cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277630: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x277630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x277634: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x277634u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x277638: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x277638u;
    {
        const bool branch_taken_0x277638 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x277638) {
            ctx->pc = 0x27764Cu;
            goto label_27764c;
        }
    }
    ctx->pc = 0x277640u;
    // 0x277640: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x277640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277644: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x277644u;
    SET_GPR_U32(ctx, 31, 0x27764Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x277644u, 0x27764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27764Cu;
label_27764c:
    // 0x27764c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27764cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x277650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277654: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x277654u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x277658: 0x3e00008  jr          $ra
    ctx->pc = 0x277658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277660u;
}
