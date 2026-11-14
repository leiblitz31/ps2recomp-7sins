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

// Function: sub_001C4550
// Address: 0x1c4550 - 0x1c46b0
void sub_001C4550_0x1c4550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4550_0x1c4550");
#endif

    switch (ctx->pc) {
        case 0x1c4584u: goto label_1c4584;
        case 0x1c4598u: goto label_1c4598;
        case 0x1c45bcu: goto label_1c45bc;
        case 0x1c45e4u: goto label_1c45e4;
        case 0x1c4608u: goto label_1c4608;
        case 0x1c4630u: goto label_1c4630;
        case 0x1c4660u: goto label_1c4660;
        case 0x1c4670u: goto label_1c4670;
        case 0x1c4694u: goto label_1c4694;
        default: break;
    }

    ctx->pc = 0x1c4550u;

    // 0x1c4550: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c4550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1c4554: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c4554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c4558: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c4558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c455c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c455cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c4560: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c4560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c4564: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1c4564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1c4568: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1c4568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1c456c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1c456cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1c4570: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x1c4570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x1c4574: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x1c4574u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x1c4578: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1c4578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c457c: 0xc06e8c8  jal         func_1BA320
    ctx->pc = 0x1C457Cu;
    SET_GPR_U32(ctx, 31, 0x1C4584u);
    ctx->pc = 0x1BA320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA320u, 0x1C457Cu, 0x1C4584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4584u;
label_1c4584:
    // 0x1c4584: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1c4584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1c4588: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1c4588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c458c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1c458cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c4590: 0xc041954  jal         func_106550
    ctx->pc = 0x1C4590u;
    SET_GPR_U32(ctx, 31, 0x1C4598u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x1C4590u, 0x1C4598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4598u;
label_1c4598:
    // 0x1c4598: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1c4598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c459c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c459cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c45a0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1c45a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c45a4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c45a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c45a8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1c45a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1c45ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c45acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c45b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c45b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c45b4: 0xc071430  jal         func_1C50C0
    ctx->pc = 0x1C45B4u;
    SET_GPR_U32(ctx, 31, 0x1C45BCu);
    ctx->pc = 0x1C50C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C50C0u, 0x1C45B4u, 0x1C45BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C45BCu;
label_1c45bc:
    // 0x1c45bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c45bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c45c0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1c45c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c45c4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c45c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c45c8: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x1c45c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c45cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1c45ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c45d0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1c45d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c45d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c45d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c45d8: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x1c45d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1c45dc: 0xc07126c  jal         func_1C49B0
    ctx->pc = 0x1C45DCu;
    SET_GPR_U32(ctx, 31, 0x1C45E4u);
    ctx->pc = 0x1C49B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C49B0u, 0x1C45DCu, 0x1C45E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C45E4u;
label_1c45e4:
    // 0x1c45e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c45e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c45e8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1c45e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c45ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c45ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c45f0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C45F0u;
    {
        const bool branch_taken_0x1c45f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c45f0) {
            ctx->pc = 0x1C4614u;
            goto label_1c4614;
        }
    }
    ctx->pc = 0x1C45F8u;
    // 0x1c45f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c45f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c45fc: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1c45fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c4600: 0xc0711fc  jal         func_1C47F0
    ctx->pc = 0x1C4600u;
    SET_GPR_U32(ctx, 31, 0x1C4608u);
    ctx->pc = 0x1C47F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C47F0u, 0x1C4600u, 0x1C4608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4608u;
label_1c4608:
    // 0x1c4608: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1c4608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1c460c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C460Cu;
    {
        const bool branch_taken_0x1c460c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c460c) {
            ctx->pc = 0x1C4634u;
            goto label_1c4634;
        }
    }
    ctx->pc = 0x1C4614u;
label_1c4614:
    // 0x1c4614: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x1c4614u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c461c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1c461cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c4620: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1c4620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c4624: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1c4624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1c4628: 0xc0711dc  jal         func_1C4770
    ctx->pc = 0x1C4628u;
    SET_GPR_U32(ctx, 31, 0x1C4630u);
    ctx->pc = 0x1C4770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4770u, 0x1C4628u, 0x1C4630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4630u;
label_1c4630:
    // 0x1c4630: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c4630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4634:
    // 0x1c4634: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x1c4634u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c4638: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C4638u;
    {
        const bool branch_taken_0x1c4638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4638) {
            ctx->pc = 0x1C4664u;
            goto label_1c4664;
        }
    }
    ctx->pc = 0x1C4640u;
    // 0x1c4640: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c4640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4644: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x1c4644u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4648: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1c4648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c464c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1c464cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c4650: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c4650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4654: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1c4654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c4658: 0xc07126c  jal         func_1C49B0
    ctx->pc = 0x1C4658u;
    SET_GPR_U32(ctx, 31, 0x1C4660u);
    ctx->pc = 0x1C49B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C49B0u, 0x1C4658u, 0x1C4660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4660u;
label_1c4660:
    // 0x1c4660: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c4660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4664:
    // 0x1c4664: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1c4664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4668: 0xc0711c0  jal         func_1C4700
    ctx->pc = 0x1C4668u;
    SET_GPR_U32(ctx, 31, 0x1C4670u);
    ctx->pc = 0x1C4700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4700u, 0x1C4668u, 0x1C4670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4670u;
label_1c4670:
    // 0x1c4670: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1c4670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1c4674: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1c4674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1c4678: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c4678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c467c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x1c467cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1c4680: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1c4680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4684: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c4684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4688: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c4688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c468c: 0xc0711ac  jal         func_1C46B0
    ctx->pc = 0x1C468Cu;
    SET_GPR_U32(ctx, 31, 0x1C4694u);
    ctx->pc = 0x1C46B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46B0u, 0x1C468Cu, 0x1C4694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4694u;
label_1c4694:
    // 0x1c4694: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c4694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4698: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c4698u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c469c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c469cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c46a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c46a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c46a4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1c46a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1c46a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C46A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C46A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C46B0u;
}
