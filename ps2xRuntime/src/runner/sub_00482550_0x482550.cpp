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

// Function: sub_00482550
// Address: 0x482550 - 0x482710
void sub_00482550_0x482550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482550_0x482550");
#endif

    switch (ctx->pc) {
        case 0x482580u: goto label_482580;
        case 0x482590u: goto label_482590;
        case 0x4825a4u: goto label_4825a4;
        case 0x4825acu: goto label_4825ac;
        case 0x4825b8u: goto label_4825b8;
        case 0x4825c8u: goto label_4825c8;
        case 0x4825d4u: goto label_4825d4;
        case 0x4825e4u: goto label_4825e4;
        case 0x4825f0u: goto label_4825f0;
        case 0x482604u: goto label_482604;
        case 0x482614u: goto label_482614;
        case 0x48262cu: goto label_48262c;
        case 0x482638u: goto label_482638;
        case 0x482644u: goto label_482644;
        case 0x482660u: goto label_482660;
        case 0x482674u: goto label_482674;
        case 0x482688u: goto label_482688;
        case 0x482698u: goto label_482698;
        case 0x4826a8u: goto label_4826a8;
        case 0x4826bcu: goto label_4826bc;
        case 0x4826d0u: goto label_4826d0;
        case 0x4826f0u: goto label_4826f0;
        default: break;
    }

    ctx->pc = 0x482550u;

    // 0x482550: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x482550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x482554: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x482554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x482558: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x482558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48255c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48255cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x482560: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x482560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x482564: 0xa7a50060  sh          $a1, 0x60($sp)
    ctx->pc = 0x482564u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 96), (uint16_t)GPR_U32(ctx, 5));
    // 0x482568: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x482568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48256c: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x48256Cu;
    {
        const bool branch_taken_0x48256c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48256c) {
            ctx->pc = 0x4826F0u;
            goto label_4826f0;
        }
    }
    ctx->pc = 0x482574u;
    // 0x482574: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x482574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x482578: 0xc120c00  jal         func_483000
    ctx->pc = 0x482578u;
    SET_GPR_U32(ctx, 31, 0x482580u);
    ctx->pc = 0x483000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483000u, 0x482578u, 0x482580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482580u;
label_482580:
    // 0x482580: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x482580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x482584: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x482584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482588: 0xc120bc0  jal         func_482F00
    ctx->pc = 0x482588u;
    SET_GPR_U32(ctx, 31, 0x482590u);
    ctx->pc = 0x482F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482F00u, 0x482588u, 0x482590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482590u;
label_482590:
    // 0x482590: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x482590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x482594: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x482594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x482598: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x482598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x48259c: 0xc0a0430  jal         func_2810C0
    ctx->pc = 0x48259Cu;
    SET_GPR_U32(ctx, 31, 0x4825A4u);
    ctx->pc = 0x2810C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2810C0u, 0x48259Cu, 0x4825A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4825A4u;
label_4825a4:
    // 0x4825a4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x4825A4u;
    {
        const bool branch_taken_0x4825a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4825a4) {
            ctx->pc = 0x4825F0u;
            goto label_4825f0;
        }
    }
    ctx->pc = 0x4825ACu;
label_4825ac:
    // 0x4825ac: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x4825acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x4825b0: 0xc0a041c  jal         func_281070
    ctx->pc = 0x4825B0u;
    SET_GPR_U32(ctx, 31, 0x4825B8u);
    ctx->pc = 0x281070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281070u, 0x4825B0u, 0x4825B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4825B8u;
label_4825b8:
    // 0x4825b8: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x4825b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4825bc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4825bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4825c0: 0xc0ef2dc  jal         func_3BCB70
    ctx->pc = 0x4825C0u;
    SET_GPR_U32(ctx, 31, 0x4825C8u);
    ctx->pc = 0x3BCB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCB70u, 0x4825C0u, 0x4825C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4825C8u;
label_4825c8:
    // 0x4825c8: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x4825c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x4825cc: 0xc0a041c  jal         func_281070
    ctx->pc = 0x4825CCu;
    SET_GPR_U32(ctx, 31, 0x4825D4u);
    ctx->pc = 0x281070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281070u, 0x4825CCu, 0x4825D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4825D4u;
label_4825d4:
    // 0x4825d4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4825d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4825d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4825d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4825dc: 0xc120ae0  jal         func_482B80
    ctx->pc = 0x4825DCu;
    SET_GPR_U32(ctx, 31, 0x4825E4u);
    ctx->pc = 0x482B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482B80u, 0x4825DCu, 0x4825E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4825E4u;
label_4825e4:
    // 0x4825e4: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x4825e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x4825e8: 0xc0a0330  jal         func_280CC0
    ctx->pc = 0x4825E8u;
    SET_GPR_U32(ctx, 31, 0x4825F0u);
    ctx->pc = 0x280CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280CC0u, 0x4825E8u, 0x4825F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4825F0u;
label_4825f0:
    // 0x4825f0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x4825f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4825f4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4825f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4825f8: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x4825f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x4825fc: 0xc0a0284  jal         func_280A10
    ctx->pc = 0x4825FCu;
    SET_GPR_U32(ctx, 31, 0x482604u);
    ctx->pc = 0x280A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280A10u, 0x4825FCu, 0x482604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482604u;
label_482604:
    // 0x482604: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x482604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x482608: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x482608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48260c: 0xc0a0278  jal         func_2809E0
    ctx->pc = 0x48260Cu;
    SET_GPR_U32(ctx, 31, 0x482614u);
    ctx->pc = 0x2809E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2809E0u, 0x48260Cu, 0x482614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482614u;
label_482614:
    // 0x482614: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x482614u;
    {
        const bool branch_taken_0x482614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x482614) {
            ctx->pc = 0x4825ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4825ac;
        }
    }
    ctx->pc = 0x48261Cu;
    // 0x48261c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x48261cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x482620: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x482620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x482624: 0xc120ad4  jal         func_482B50
    ctx->pc = 0x482624u;
    SET_GPR_U32(ctx, 31, 0x48262Cu);
    ctx->pc = 0x482B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482B50u, 0x482624u, 0x48262Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48262Cu;
label_48262c:
    // 0x48262c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x48262cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x482630: 0xc120acc  jal         func_482B30
    ctx->pc = 0x482630u;
    SET_GPR_U32(ctx, 31, 0x482638u);
    ctx->pc = 0x482B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482B30u, 0x482630u, 0x482638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482638u;
label_482638:
    // 0x482638: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x482638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48263c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x48263Cu;
    {
        const bool branch_taken_0x48263c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48263c) {
            ctx->pc = 0x482668u;
            goto label_482668;
        }
    }
    ctx->pc = 0x482644u;
label_482644:
    // 0x482644: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x482644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x482648: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x482648u;
    {
        const bool branch_taken_0x482648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x482648) {
            ctx->pc = 0x482664u;
            goto label_482664;
        }
    }
    ctx->pc = 0x482650u;
    // 0x482650: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x482650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x482654: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x482654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x482658: 0xc120a90  jal         func_482A40
    ctx->pc = 0x482658u;
    SET_GPR_U32(ctx, 31, 0x482660u);
    ctx->pc = 0x482A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482A40u, 0x482658u, 0x482660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482660u;
label_482660:
    // 0x482660: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x482660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_482664:
    // 0x482664: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x482664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_482668:
    // 0x482668: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x482668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48266c: 0xc120a88  jal         func_482A20
    ctx->pc = 0x48266Cu;
    SET_GPR_U32(ctx, 31, 0x482674u);
    ctx->pc = 0x482A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482A20u, 0x48266Cu, 0x482674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482674u;
label_482674:
    // 0x482674: 0x1602fff3  bne         $s0, $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x482674u;
    {
        const bool branch_taken_0x482674 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x482674) {
            ctx->pc = 0x482644u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_482644;
        }
    }
    ctx->pc = 0x48267Cu;
    // 0x48267c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x48267cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x482680: 0xc121248  jal         func_484920
    ctx->pc = 0x482680u;
    SET_GPR_U32(ctx, 31, 0x482688u);
    ctx->pc = 0x484920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484920u, 0x482680u, 0x482688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482688u;
label_482688:
    // 0x482688: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x482688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48268c: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x48268cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x482690: 0xc120a34  jal         func_4828D0
    ctx->pc = 0x482690u;
    SET_GPR_U32(ctx, 31, 0x482698u);
    ctx->pc = 0x4828D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4828D0u, 0x482690u, 0x482698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482698u;
label_482698:
    // 0x482698: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x482698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48269c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48269cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4826a0: 0xc1209c4  jal         func_482710
    ctx->pc = 0x4826A0u;
    SET_GPR_U32(ctx, 31, 0x4826A8u);
    ctx->pc = 0x482710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482710u, 0x4826A0u, 0x4826A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4826A8u;
label_4826a8:
    // 0x4826a8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x4826a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4826ac: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x4826acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x4826b0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4826b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4826b4: 0xc1206cc  jal         func_481B30
    ctx->pc = 0x4826B4u;
    SET_GPR_U32(ctx, 31, 0x4826BCu);
    ctx->pc = 0x481B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x481B30u, 0x4826B4u, 0x4826BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4826BCu;
label_4826bc:
    // 0x4826bc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x4826bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4826c0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x4826c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x4826c4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4826c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4826c8: 0xc120768  jal         func_481DA0
    ctx->pc = 0x4826C8u;
    SET_GPR_U32(ctx, 31, 0x4826D0u);
    ctx->pc = 0x481DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x481DA0u, 0x4826C8u, 0x4826D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4826D0u;
label_4826d0:
    // 0x4826d0: 0x87a20060  lh          $v0, 0x60($sp)
    ctx->pc = 0x4826d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4826d4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x4826d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x4826d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4826d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4826dc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4826DCu;
    {
        const bool branch_taken_0x4826dc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4826dc) {
            ctx->pc = 0x4826F0u;
            goto label_4826f0;
        }
    }
    ctx->pc = 0x4826E4u;
    // 0x4826e4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x4826e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4826e8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x4826E8u;
    SET_GPR_U32(ctx, 31, 0x4826F0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x4826E8u, 0x4826F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4826F0u;
label_4826f0:
    // 0x4826f0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x4826f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4826f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4826f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4826f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4826f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4826fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4826fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x482700: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x482700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x482704: 0x3e00008  jr          $ra
    ctx->pc = 0x482704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48270Cu;
    // 0x48270c: 0x0  nop
    ctx->pc = 0x48270cu;
    // NOP
    ctx->pc = 0x482710u;
}
