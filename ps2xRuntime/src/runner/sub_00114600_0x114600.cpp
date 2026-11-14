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

// Function: sub_00114600
// Address: 0x114600 - 0x114a00
void sub_00114600_0x114600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114600_0x114600");
#endif

    switch (ctx->pc) {
        case 0x114680u: goto label_114680;
        case 0x11468cu: goto label_11468c;
        case 0x11469cu: goto label_11469c;
        case 0x1146a8u: goto label_1146a8;
        case 0x1146bcu: goto label_1146bc;
        case 0x1146dcu: goto label_1146dc;
        case 0x1146e4u: goto label_1146e4;
        case 0x1146fcu: goto label_1146fc;
        case 0x114710u: goto label_114710;
        case 0x11471cu: goto label_11471c;
        case 0x11473cu: goto label_11473c;
        case 0x11474cu: goto label_11474c;
        case 0x114764u: goto label_114764;
        case 0x114778u: goto label_114778;
        case 0x114788u: goto label_114788;
        case 0x1147a0u: goto label_1147a0;
        case 0x1147c4u: goto label_1147c4;
        case 0x1147e0u: goto label_1147e0;
        case 0x1147f0u: goto label_1147f0;
        case 0x11482cu: goto label_11482c;
        case 0x114838u: goto label_114838;
        case 0x114850u: goto label_114850;
        case 0x11485cu: goto label_11485c;
        case 0x11486cu: goto label_11486c;
        case 0x11488cu: goto label_11488c;
        case 0x1148a8u: goto label_1148a8;
        case 0x1148c8u: goto label_1148c8;
        case 0x1148dcu: goto label_1148dc;
        case 0x1148f0u: goto label_1148f0;
        case 0x11492cu: goto label_11492c;
        case 0x11493cu: goto label_11493c;
        case 0x11495cu: goto label_11495c;
        case 0x114968u: goto label_114968;
        case 0x11497cu: goto label_11497c;
        case 0x114994u: goto label_114994;
        case 0x1149a4u: goto label_1149a4;
        case 0x1149b4u: goto label_1149b4;
        case 0x1149c4u: goto label_1149c4;
        default: break;
    }

    ctx->pc = 0x114600u;

    // 0x114600: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x114600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x114604: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x114604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x114608: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x114608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x11460c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x11460cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x114610: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x114610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x114614: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x114614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x114618: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x114618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x11461c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11461cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x114620: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x114620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x114624: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x114624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x114628: 0xafa40190  sw          $a0, 0x190($sp)
    ctx->pc = 0x114628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 4));
    // 0x11462c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x11462cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x114630: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x114630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x114634: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x114634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x114638: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x114638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11463c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11463Cu;
    {
        const bool branch_taken_0x11463c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11463c) {
            ctx->pc = 0x114650u;
            goto label_114650;
        }
    }
    ctx->pc = 0x114644u;
    // 0x114644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x114644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114648: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x114648u;
    {
        const bool branch_taken_0x114648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x114648) {
            ctx->pc = 0x1149C8u;
            goto label_1149c8;
        }
    }
    ctx->pc = 0x114650u;
label_114650:
    // 0x114650: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x114650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114654: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x114654u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x114658: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x114658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x11465c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11465cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114660: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x114660u;
    {
        const bool branch_taken_0x114660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x114660) {
            ctx->pc = 0x114674u;
            goto label_114674;
        }
    }
    ctx->pc = 0x114668u;
    // 0x114668: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x114668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11466c: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x11466Cu;
    {
        const bool branch_taken_0x11466c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11466c) {
            ctx->pc = 0x1149C8u;
            goto label_1149c8;
        }
    }
    ctx->pc = 0x114674u;
label_114674:
    // 0x114674: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x114674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x114678: 0xc08dea4  jal         func_237A90
    ctx->pc = 0x114678u;
    SET_GPR_U32(ctx, 31, 0x114680u);
    ctx->pc = 0x237A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237A90u, 0x114678u, 0x114680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114680u;
label_114680:
    // 0x114680: 0x27a40178  addiu       $a0, $sp, 0x178
    ctx->pc = 0x114680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x114684: 0xc041b48  jal         func_106D20
    ctx->pc = 0x114684u;
    SET_GPR_U32(ctx, 31, 0x11468Cu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x114684u, 0x11468Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11468Cu;
label_11468c:
    // 0x11468c: 0x27a40168  addiu       $a0, $sp, 0x168
    ctx->pc = 0x11468cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x114690: 0x27858994  addiu       $a1, $gp, -0x766C
    ctx->pc = 0x114690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936980));
    // 0x114694: 0xc040304  jal         func_100C10
    ctx->pc = 0x114694u;
    SET_GPR_U32(ctx, 31, 0x11469Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x114694u, 0x11469Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11469Cu;
label_11469c:
    // 0x11469c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x11469cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1146a0: 0xc119d5c  jal         func_467570
    ctx->pc = 0x1146A0u;
    SET_GPR_U32(ctx, 31, 0x1146A8u);
    ctx->pc = 0x467570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467570u, 0x1146A0u, 0x1146A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1146A8u;
label_1146a8:
    // 0x1146a8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1146a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1146ac: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1146acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1146b0: 0x24a51b80  addiu       $a1, $a1, 0x1B80
    ctx->pc = 0x1146b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7040));
    // 0x1146b4: 0xc08ded4  jal         func_237B50
    ctx->pc = 0x1146B4u;
    SET_GPR_U32(ctx, 31, 0x1146BCu);
    ctx->pc = 0x237B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237B50u, 0x1146B4u, 0x1146BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1146BCu;
label_1146bc:
    // 0x1146bc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1146bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1146c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1146c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1146c4: 0x146200ad  bne         $v1, $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x1146C4u;
    {
        const bool branch_taken_0x1146c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1146c4) {
            ctx->pc = 0x11497Cu;
            goto label_11497c;
        }
    }
    ctx->pc = 0x1146CCu;
    // 0x1146cc: 0xafa0018c  sw          $zero, 0x18C($sp)
    ctx->pc = 0x1146ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 0));
    // 0x1146d0: 0x27a40158  addiu       $a0, $sp, 0x158
    ctx->pc = 0x1146d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x1146d4: 0xc0452e0  jal         func_114B80
    ctx->pc = 0x1146D4u;
    SET_GPR_U32(ctx, 31, 0x1146DCu);
    ctx->pc = 0x114B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B80u, 0x1146D4u, 0x1146DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1146DCu;
label_1146dc:
    // 0x1146dc: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x1146DCu;
    {
        const bool branch_taken_0x1146dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1146dc) {
            ctx->pc = 0x1148DCu;
            goto label_1148dc;
        }
    }
    ctx->pc = 0x1146E4u;
label_1146e4:
    // 0x1146e4: 0x27a40178  addiu       $a0, $sp, 0x178
    ctx->pc = 0x1146e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x1146e8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1146e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1146ec: 0x24a51ba0  addiu       $a1, $a1, 0x1BA0
    ctx->pc = 0x1146ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7072));
    // 0x1146f0: 0x8fa6018c  lw          $a2, 0x18C($sp)
    ctx->pc = 0x1146f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x1146f4: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x1146F4u;
    SET_GPR_U32(ctx, 31, 0x1146FCu);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x1146F4u, 0x1146FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1146FCu;
label_1146fc:
    // 0x1146fc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1146fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x114700: 0x27a50178  addiu       $a1, $sp, 0x178
    ctx->pc = 0x114700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x114704: 0x27a60168  addiu       $a2, $sp, 0x168
    ctx->pc = 0x114704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x114708: 0xc119dc4  jal         func_467710
    ctx->pc = 0x114708u;
    SET_GPR_U32(ctx, 31, 0x114710u);
    ctx->pc = 0x467710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467710u, 0x114708u, 0x114710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114710u;
label_114710:
    // 0x114710: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x114710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x114714: 0xc119db4  jal         func_4676D0
    ctx->pc = 0x114714u;
    SET_GPR_U32(ctx, 31, 0x11471Cu);
    ctx->pc = 0x4676D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4676D0u, 0x114714u, 0x11471Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11471Cu;
label_11471c:
    // 0x11471c: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x11471Cu;
    {
        const bool branch_taken_0x11471c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11471c) {
            ctx->pc = 0x1148DCu;
            goto label_1148dc;
        }
    }
    ctx->pc = 0x114724u;
    // 0x114724: 0x8f82b9b4  lw          $v0, -0x464C($gp)
    ctx->pc = 0x114724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949300)));
    // 0x114728: 0x14020020  bne         $zero, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x114728u;
    {
        const bool branch_taken_0x114728 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x114728) {
            ctx->pc = 0x1147ACu;
            goto label_1147ac;
        }
    }
    ctx->pc = 0x114730u;
    // 0x114730: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x114730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x114734: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x114734u;
    SET_GPR_U32(ctx, 31, 0x11473Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x114734u, 0x11473Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11473Cu;
label_11473c:
    // 0x11473c: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x11473cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x114740: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x114740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114744: 0xc0400e0  jal         func_100380
    ctx->pc = 0x114744u;
    SET_GPR_U32(ctx, 31, 0x11474Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x114744u, 0x11474Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11474Cu;
label_11474c:
    // 0x11474c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11474cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114750: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x114750u;
    {
        const bool branch_taken_0x114750 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x114750) {
            ctx->pc = 0x114768u;
            goto label_114768;
        }
    }
    ctx->pc = 0x114758u;
    // 0x114758: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11475c: 0xc0457c4  jal         func_115F10
    ctx->pc = 0x11475Cu;
    SET_GPR_U32(ctx, 31, 0x114764u);
    ctx->pc = 0x115F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115F10u, 0x11475Cu, 0x114764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114764u;
label_114764:
    // 0x114764: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x114764u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_114768:
    // 0x114768: 0xaf92b9b4  sw          $s2, -0x464C($gp)
    ctx->pc = 0x114768u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949300), GPR_U32(ctx, 18));
    // 0x11476c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x11476cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x114770: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x114770u;
    SET_GPR_U32(ctx, 31, 0x114778u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x114770u, 0x114778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114778u;
label_114778:
    // 0x114778: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x114778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11477c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11477cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114780: 0xc0400e0  jal         func_100380
    ctx->pc = 0x114780u;
    SET_GPR_U32(ctx, 31, 0x114788u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x114780u, 0x114788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114788u;
label_114788:
    // 0x114788: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x114788u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11478c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11478Cu;
    {
        const bool branch_taken_0x11478c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x11478c) {
            ctx->pc = 0x1147A4u;
            goto label_1147a4;
        }
    }
    ctx->pc = 0x114794u;
    // 0x114794: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114798: 0xc088560  jal         func_221580
    ctx->pc = 0x114798u;
    SET_GPR_U32(ctx, 31, 0x1147A0u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x114798u, 0x1147A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1147A0u;
label_1147a0:
    // 0x1147a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1147a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1147a4:
    // 0x1147a4: 0x8f82b9b4  lw          $v0, -0x464C($gp)
    ctx->pc = 0x1147a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949300)));
    // 0x1147a8: 0xac510034  sw          $s1, 0x34($v0)
    ctx->pc = 0x1147a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 17));
label_1147ac:
    // 0x1147ac: 0x8f82b9b4  lw          $v0, -0x464C($gp)
    ctx->pc = 0x1147acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949300)));
    // 0x1147b0: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x1147b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x1147b4: 0x8f84b9b4  lw          $a0, -0x464C($gp)
    ctx->pc = 0x1147b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949300)));
    // 0x1147b8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1147b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1147bc: 0xc0457fc  jal         func_115FF0
    ctx->pc = 0x1147BCu;
    SET_GPR_U32(ctx, 31, 0x1147C4u);
    ctx->pc = 0x115FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FF0u, 0x1147BCu, 0x1147C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1147C4u;
label_1147c4:
    // 0x1147c4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1147c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1147c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1147c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1147cc: 0x14620040  bne         $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1147CCu;
    {
        const bool branch_taken_0x1147cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1147cc) {
            ctx->pc = 0x1148D0u;
            goto label_1148d0;
        }
    }
    ctx->pc = 0x1147D4u;
    // 0x1147d4: 0x8f84b9b4  lw          $a0, -0x464C($gp)
    ctx->pc = 0x1147d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949300)));
    // 0x1147d8: 0xc0457d8  jal         func_115F60
    ctx->pc = 0x1147D8u;
    SET_GPR_U32(ctx, 31, 0x1147E0u);
    ctx->pc = 0x115F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115F60u, 0x1147D8u, 0x1147E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1147E0u;
label_1147e0:
    // 0x1147e0: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x1147e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1147e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1147e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1147e8: 0xc044da4  jal         func_113690
    ctx->pc = 0x1147E8u;
    SET_GPR_U32(ctx, 31, 0x1147F0u);
    ctx->pc = 0x113690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113690u, 0x1147E8u, 0x1147F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1147F0u;
label_1147f0:
    // 0x1147f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1147f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1147f4: 0x10100029  beq         $zero, $s0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1147F4u;
    {
        const bool branch_taken_0x1147f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x1147f4) {
            ctx->pc = 0x11489Cu;
            goto label_11489c;
        }
    }
    ctx->pc = 0x1147FCu;
    // 0x1147fc: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1147fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x114800: 0x8f82b9b4  lw          $v0, -0x464C($gp)
    ctx->pc = 0x114800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949300)));
    // 0x114804: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x114804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x114808: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x114808u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11480c: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x11480Cu;
    {
        const bool branch_taken_0x11480c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11480c) {
            ctx->pc = 0x1148D0u;
            goto label_1148d0;
        }
    }
    ctx->pc = 0x114814u;
    // 0x114814: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x114814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x114818: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x114818u;
    {
        const bool branch_taken_0x114818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114818) {
            ctx->pc = 0x11483Cu;
            goto label_11483c;
        }
    }
    ctx->pc = 0x114820u;
    // 0x114820: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x114820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x114824: 0xc044f78  jal         func_113DE0
    ctx->pc = 0x114824u;
    SET_GPR_U32(ctx, 31, 0x11482Cu);
    ctx->pc = 0x113DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113DE0u, 0x114824u, 0x11482Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11482Cu;
label_11482c:
    // 0x11482c: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x11482cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x114830: 0xc119c5c  jal         func_467170
    ctx->pc = 0x114830u;
    SET_GPR_U32(ctx, 31, 0x114838u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x114830u, 0x114838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114838u;
label_114838:
    // 0x114838: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x114838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_11483c:
    // 0x11483c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11483Cu;
    {
        const bool branch_taken_0x11483c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11483c) {
            ctx->pc = 0x114860u;
            goto label_114860;
        }
    }
    ctx->pc = 0x114844u;
    // 0x114844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x114844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114848: 0xc044f70  jal         func_113DC0
    ctx->pc = 0x114848u;
    SET_GPR_U32(ctx, 31, 0x114850u);
    ctx->pc = 0x113DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113DC0u, 0x114848u, 0x114850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114850u;
label_114850:
    // 0x114850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x114850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114854: 0xc119c5c  jal         func_467170
    ctx->pc = 0x114854u;
    SET_GPR_U32(ctx, 31, 0x11485Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x114854u, 0x11485Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11485Cu;
label_11485c:
    // 0x11485c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11485cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114860:
    // 0x114860: 0x8f84b9b4  lw          $a0, -0x464C($gp)
    ctx->pc = 0x114860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949300)));
    // 0x114864: 0xc0457d8  jal         func_115F60
    ctx->pc = 0x114864u;
    SET_GPR_U32(ctx, 31, 0x11486Cu);
    ctx->pc = 0x115F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115F60u, 0x114864u, 0x11486Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11486Cu;
label_11486c:
    // 0x11486c: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x11486cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
    // 0x114870: 0x27b50188  addiu       $s5, $sp, 0x188
    ctx->pc = 0x114870u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x114874: 0x8f97b9b4  lw          $s7, -0x464C($gp)
    ctx->pc = 0x114874u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949300)));
    // 0x114878: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x114878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x11487c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x11487cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x114880: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x114880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114884: 0xc045054  jal         func_114150
    ctx->pc = 0x114884u;
    SET_GPR_U32(ctx, 31, 0x11488Cu);
    ctx->pc = 0x114150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114150u, 0x114884u, 0x11488Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11488Cu;
label_11488c:
    // 0x11488c: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x11488cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x114890: 0xaf80b9b4  sw          $zero, -0x464C($gp)
    ctx->pc = 0x114890u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949300), GPR_U32(ctx, 0));
    // 0x114894: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x114894u;
    {
        const bool branch_taken_0x114894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x114894) {
            ctx->pc = 0x1148D0u;
            goto label_1148d0;
        }
    }
    ctx->pc = 0x11489Cu;
label_11489c:
    // 0x11489c: 0x8f84b9b4  lw          $a0, -0x464C($gp)
    ctx->pc = 0x11489cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949300)));
    // 0x1148a0: 0xc0457d8  jal         func_115F60
    ctx->pc = 0x1148A0u;
    SET_GPR_U32(ctx, 31, 0x1148A8u);
    ctx->pc = 0x115F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115F60u, 0x1148A0u, 0x1148A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1148A8u;
label_1148a8:
    // 0x1148a8: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x1148a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
    // 0x1148ac: 0x27b40184  addiu       $s4, $sp, 0x184
    ctx->pc = 0x1148acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x1148b0: 0x8f97b9b4  lw          $s7, -0x464C($gp)
    ctx->pc = 0x1148b0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949300)));
    // 0x1148b4: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1148b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1148b8: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x1148b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1148bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1148bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1148c0: 0xc045054  jal         func_114150
    ctx->pc = 0x1148C0u;
    SET_GPR_U32(ctx, 31, 0x1148C8u);
    ctx->pc = 0x114150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114150u, 0x1148C0u, 0x1148C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1148C8u;
label_1148c8:
    // 0x1148c8: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x1148c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x1148cc: 0xaf80b9b4  sw          $zero, -0x464C($gp)
    ctx->pc = 0x1148ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949300), GPR_U32(ctx, 0));
label_1148d0:
    // 0x1148d0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1148d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1148d4: 0xc119e7c  jal         func_4679F0
    ctx->pc = 0x1148D4u;
    SET_GPR_U32(ctx, 31, 0x1148DCu);
    ctx->pc = 0x4679F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4679F0u, 0x1148D4u, 0x1148DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1148DCu;
label_1148dc:
    // 0x1148dc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1148dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1148e0: 0x27a5018c  addiu       $a1, $sp, 0x18C
    ctx->pc = 0x1148e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
    // 0x1148e4: 0x27868998  addiu       $a2, $gp, -0x7668
    ctx->pc = 0x1148e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936984));
    // 0x1148e8: 0xc08dee4  jal         func_237B90
    ctx->pc = 0x1148E8u;
    SET_GPR_U32(ctx, 31, 0x1148F0u);
    ctx->pc = 0x237B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237B90u, 0x1148E8u, 0x1148F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1148F0u;
label_1148f0:
    // 0x1148f0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1148f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1148f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1148f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1148f8: 0x1062ff7a  beq         $v1, $v0, . + 4 + (-0x86 << 2)
    ctx->pc = 0x1148F8u;
    {
        const bool branch_taken_0x1148f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1148f8) {
            ctx->pc = 0x1146E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1146e4;
        }
    }
    ctx->pc = 0x114900u;
    // 0x114900: 0x8f82b9b4  lw          $v0, -0x464C($gp)
    ctx->pc = 0x114900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949300)));
    // 0x114904: 0x10020019  beq         $zero, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x114904u;
    {
        const bool branch_taken_0x114904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x114904) {
            ctx->pc = 0x11496Cu;
            goto label_11496c;
        }
    }
    ctx->pc = 0x11490Cu;
    // 0x11490c: 0x8f82b9b4  lw          $v0, -0x464C($gp)
    ctx->pc = 0x11490cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949300)));
    // 0x114910: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x114910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x114914: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x114914u;
    {
        const bool branch_taken_0x114914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114914) {
            ctx->pc = 0x114944u;
            goto label_114944;
        }
    }
    ctx->pc = 0x11491Cu;
    // 0x11491c: 0x8f82b9b4  lw          $v0, -0x464C($gp)
    ctx->pc = 0x11491cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949300)));
    // 0x114920: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x114920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x114924: 0xc044f78  jal         func_113DE0
    ctx->pc = 0x114924u;
    SET_GPR_U32(ctx, 31, 0x11492Cu);
    ctx->pc = 0x113DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113DE0u, 0x114924u, 0x11492Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11492Cu;
label_11492c:
    // 0x11492c: 0x8f82b9b4  lw          $v0, -0x464C($gp)
    ctx->pc = 0x11492cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949300)));
    // 0x114930: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x114930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x114934: 0xc119c5c  jal         func_467170
    ctx->pc = 0x114934u;
    SET_GPR_U32(ctx, 31, 0x11493Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x114934u, 0x11493Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11493Cu;
label_11493c:
    // 0x11493c: 0x8f82b9b4  lw          $v0, -0x464C($gp)
    ctx->pc = 0x11493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949300)));
    // 0x114940: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x114940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_114944:
    // 0x114944: 0x8f82b9b4  lw          $v0, -0x464C($gp)
    ctx->pc = 0x114944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949300)));
    // 0x114948: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x114948u;
    {
        const bool branch_taken_0x114948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114948) {
            ctx->pc = 0x11496Cu;
            goto label_11496c;
        }
    }
    ctx->pc = 0x114950u;
    // 0x114950: 0x8f84b9b4  lw          $a0, -0x464C($gp)
    ctx->pc = 0x114950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949300)));
    // 0x114954: 0xc044f70  jal         func_113DC0
    ctx->pc = 0x114954u;
    SET_GPR_U32(ctx, 31, 0x11495Cu);
    ctx->pc = 0x113DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113DC0u, 0x114954u, 0x11495Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11495Cu;
label_11495c:
    // 0x11495c: 0x8f84b9b4  lw          $a0, -0x464C($gp)
    ctx->pc = 0x11495cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949300)));
    // 0x114960: 0xc119c5c  jal         func_467170
    ctx->pc = 0x114960u;
    SET_GPR_U32(ctx, 31, 0x114968u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x114960u, 0x114968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114968u;
label_114968:
    // 0x114968: 0xaf80b9b4  sw          $zero, -0x464C($gp)
    ctx->pc = 0x114968u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949300), GPR_U32(ctx, 0));
label_11496c:
    // 0x11496c: 0x27a40158  addiu       $a0, $sp, 0x158
    ctx->pc = 0x11496cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x114970: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x114970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x114974: 0xc045280  jal         func_114A00
    ctx->pc = 0x114974u;
    SET_GPR_U32(ctx, 31, 0x11497Cu);
    ctx->pc = 0x114A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114A00u, 0x114974u, 0x11497Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11497Cu;
label_11497c:
    // 0x11497c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11497cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114980: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x114980u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x114984: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x114984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x114988: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x114988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11498c: 0xc119d90  jal         func_467640
    ctx->pc = 0x11498Cu;
    SET_GPR_U32(ctx, 31, 0x114994u);
    ctx->pc = 0x467640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467640u, 0x11498Cu, 0x114994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114994u;
label_114994:
    // 0x114994: 0x27a40168  addiu       $a0, $sp, 0x168
    ctx->pc = 0x114994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x114998: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x114998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11499c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x11499Cu;
    SET_GPR_U32(ctx, 31, 0x1149A4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x11499Cu, 0x1149A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1149A4u;
label_1149a4:
    // 0x1149a4: 0x27a40178  addiu       $a0, $sp, 0x178
    ctx->pc = 0x1149a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x1149a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1149a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1149ac: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1149ACu;
    SET_GPR_U32(ctx, 31, 0x1149B4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1149ACu, 0x1149B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1149B4u;
label_1149b4:
    // 0x1149b4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1149b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1149b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1149b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1149bc: 0xc08deb0  jal         func_237AC0
    ctx->pc = 0x1149BCu;
    SET_GPR_U32(ctx, 31, 0x1149C4u);
    ctx->pc = 0x237AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237AC0u, 0x1149BCu, 0x1149C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1149C4u;
label_1149c4:
    // 0x1149c4: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1149c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1149c8:
    // 0x1149c8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1149c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1149cc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1149ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1149d0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1149d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1149d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1149d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1149d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1149d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1149dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1149dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1149e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1149e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1149e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1149e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1149e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1149e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1149ec: 0x27bd01a0  addiu       $sp, $sp, 0x1A0
    ctx->pc = 0x1149ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1149f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1149F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1149F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1149F8u;
    // 0x1149f8: 0x0  nop
    ctx->pc = 0x1149f8u;
    // NOP
    // 0x1149fc: 0x0  nop
    ctx->pc = 0x1149fcu;
    // NOP
    ctx->pc = 0x114a00u;
}
