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

// Function: sub_001AD680
// Address: 0x1ad680 - 0x1ad8b0
void sub_001AD680_0x1ad680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD680_0x1ad680");
#endif

    switch (ctx->pc) {
        case 0x1ad704u: goto label_1ad704;
        case 0x1ad734u: goto label_1ad734;
        case 0x1ad754u: goto label_1ad754;
        case 0x1ad764u: goto label_1ad764;
        case 0x1ad798u: goto label_1ad798;
        case 0x1ad818u: goto label_1ad818;
        case 0x1ad84cu: goto label_1ad84c;
        case 0x1ad860u: goto label_1ad860;
        case 0x1ad890u: goto label_1ad890;
        default: break;
    }

    ctx->pc = 0x1ad680u;

    // 0x1ad680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ad680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ad684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ad684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ad688: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ad688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1ad68c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ad68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad690: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1ad690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1ad694: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x1ad694u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1ad698: 0x1020006c  beqz        $at, . + 4 + (0x6C << 2)
    ctx->pc = 0x1AD698u;
    {
        const bool branch_taken_0x1ad698 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad698) {
            ctx->pc = 0x1AD84Cu;
            goto label_1ad84c;
        }
    }
    ctx->pc = 0x1AD6A0u;
    // 0x1ad6a0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1ad6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1ad6a4: 0x246386e0  addiu       $v1, $v1, -0x7920
    ctx->pc = 0x1ad6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936288));
    // 0x1ad6a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ad6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ad6ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ad6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ad6b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ad6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad6b4: 0x400008  jr          $v0
    ctx->pc = 0x1AD6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD6BCu: goto label_1ad6bc;
            case 0x1AD73Cu: goto label_1ad73c;
            case 0x1AD7C0u: goto label_1ad7c0;
            case 0x1AD84Cu: goto label_1ad84c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD6B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1AD6BCu;
label_1ad6bc:
    // 0x1ad6bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ad6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad6c0: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x1ad6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x1ad6c4: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x1AD6C4u;
    {
        const bool branch_taken_0x1ad6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad6c4) {
            ctx->pc = 0x1AD84Cu;
            goto label_1ad84c;
        }
    }
    ctx->pc = 0x1AD6CCu;
    // 0x1ad6cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ad6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad6d0: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x1ad6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x1ad6d4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1ad6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ad6d8: 0xac8300f0  sw          $v1, 0xF0($a0)
    ctx->pc = 0x1ad6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 3));
    // 0x1ad6dc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1ad6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ad6e0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD6E0u;
    {
        const bool branch_taken_0x1ad6e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ad6e0) {
            ctx->pc = 0x1AD6F4u;
            goto label_1ad6f4;
        }
    }
    ctx->pc = 0x1AD6E8u;
    // 0x1ad6e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ad6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad6ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ad6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad6f0: 0xac4300f4  sw          $v1, 0xF4($v0)
    ctx->pc = 0x1ad6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 3));
label_1ad6f4:
    // 0x1ad6f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ad6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad6f8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ad6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ad6fc: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1AD6FCu;
    SET_GPR_U32(ctx, 31, 0x1AD704u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1AD6FCu, 0x1AD704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD704u;
label_1ad704:
    // 0x1ad704: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ad704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad708: 0x8c6300f0  lw          $v1, 0xF0($v1)
    ctx->pc = 0x1ad708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1ad70c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1ad70cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ad710: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ad710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad714: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ad714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ad718: 0x8c650138  lw          $a1, 0x138($v1)
    ctx->pc = 0x1ad718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x1ad71c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ad71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad720: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x1ad720u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x1ad724: 0x24c66c48  addiu       $a2, $a2, 0x6C48
    ctx->pc = 0x1ad724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27720));
    // 0x1ad728: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ad728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad72c: 0xc08c800  jal         func_232000
    ctx->pc = 0x1AD72Cu;
    SET_GPR_U32(ctx, 31, 0x1AD734u);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x1AD72Cu, 0x1AD734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD734u;
label_1ad734:
    // 0x1ad734: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1AD734u;
    {
        const bool branch_taken_0x1ad734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad734) {
            ctx->pc = 0x1AD84Cu;
            goto label_1ad84c;
        }
    }
    ctx->pc = 0x1AD73Cu;
label_1ad73c:
    // 0x1ad73c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ad73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad740: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x1ad740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x1ad744: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1AD744u;
    {
        const bool branch_taken_0x1ad744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad744) {
            ctx->pc = 0x1AD84Cu;
            goto label_1ad84c;
        }
    }
    ctx->pc = 0x1AD74Cu;
    // 0x1ad74c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1AD74Cu;
    {
        const bool branch_taken_0x1ad74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad74c) {
            ctx->pc = 0x1AD798u;
            goto label_1ad798;
        }
    }
    ctx->pc = 0x1AD754u;
label_1ad754:
    // 0x1ad754: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ad754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad758: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ad758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ad75c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1AD75Cu;
    SET_GPR_U32(ctx, 31, 0x1AD764u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1AD75Cu, 0x1AD764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD764u;
label_1ad764:
    // 0x1ad764: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ad764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad768: 0x8c6300f0  lw          $v1, 0xF0($v1)
    ctx->pc = 0x1ad768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1ad76c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1ad76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1ad770: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1ad770u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ad774: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ad774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad778: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ad778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ad77c: 0x8c650138  lw          $a1, 0x138($v1)
    ctx->pc = 0x1ad77cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x1ad780: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ad780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad784: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x1ad784u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x1ad788: 0x24c66c58  addiu       $a2, $a2, 0x6C58
    ctx->pc = 0x1ad788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27736));
    // 0x1ad78c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ad78cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad790: 0xc08c800  jal         func_232000
    ctx->pc = 0x1AD790u;
    SET_GPR_U32(ctx, 31, 0x1AD798u);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x1AD790u, 0x1AD798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD798u;
label_1ad798:
    // 0x1ad798: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ad798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad79c: 0x8c8300f0  lw          $v1, 0xF0($a0)
    ctx->pc = 0x1ad79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x1ad7a0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1ad7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ad7a4: 0xac8200f0  sw          $v0, 0xF0($a0)
    ctx->pc = 0x1ad7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 2));
    // 0x1ad7a8: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1AD7A8u;
    {
        const bool branch_taken_0x1ad7a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad7a8) {
            ctx->pc = 0x1AD754u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad754;
        }
    }
    ctx->pc = 0x1AD7B0u;
    // 0x1ad7b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ad7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad7b4: 0xac4000f0  sw          $zero, 0xF0($v0)
    ctx->pc = 0x1ad7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 0));
    // 0x1ad7b8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1AD7B8u;
    {
        const bool branch_taken_0x1ad7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad7b8) {
            ctx->pc = 0x1AD84Cu;
            goto label_1ad84c;
        }
    }
    ctx->pc = 0x1AD7C0u;
label_1ad7c0:
    // 0x1ad7c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ad7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad7c4: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x1ad7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x1ad7c8: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1AD7C8u;
    {
        const bool branch_taken_0x1ad7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad7c8) {
            ctx->pc = 0x1AD84Cu;
            goto label_1ad84c;
        }
    }
    ctx->pc = 0x1AD7D0u;
    // 0x1ad7d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ad7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad7d4: 0x904200dc  lbu         $v0, 0xDC($v0)
    ctx->pc = 0x1ad7d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x1ad7d8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1AD7D8u;
    {
        const bool branch_taken_0x1ad7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad7d8) {
            ctx->pc = 0x1AD84Cu;
            goto label_1ad84c;
        }
    }
    ctx->pc = 0x1AD7E0u;
    // 0x1ad7e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ad7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad7e4: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x1ad7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x1ad7e8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1ad7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ad7ec: 0xac8300f0  sw          $v1, 0xF0($a0)
    ctx->pc = 0x1ad7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 3));
    // 0x1ad7f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ad7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ad7f4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD7F4u;
    {
        const bool branch_taken_0x1ad7f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ad7f4) {
            ctx->pc = 0x1AD808u;
            goto label_1ad808;
        }
    }
    ctx->pc = 0x1AD7FCu;
    // 0x1ad7fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ad7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad800: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ad800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad804: 0xac4300f4  sw          $v1, 0xF4($v0)
    ctx->pc = 0x1ad804u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 3));
label_1ad808:
    // 0x1ad808: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ad808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad80c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ad80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ad810: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1AD810u;
    SET_GPR_U32(ctx, 31, 0x1AD818u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1AD810u, 0x1AD818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD818u;
label_1ad818:
    // 0x1ad818: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ad818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad81c: 0x8c6300f0  lw          $v1, 0xF0($v1)
    ctx->pc = 0x1ad81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1ad820: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ad820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ad824: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1ad824u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ad828: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ad828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad82c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ad82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ad830: 0x8c650138  lw          $a1, 0x138($v1)
    ctx->pc = 0x1ad830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x1ad834: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ad834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad838: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x1ad838u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x1ad83c: 0x24c66c48  addiu       $a2, $a2, 0x6C48
    ctx->pc = 0x1ad83cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27720));
    // 0x1ad840: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ad840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad844: 0xc08c800  jal         func_232000
    ctx->pc = 0x1AD844u;
    SET_GPR_U32(ctx, 31, 0x1AD84Cu);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x1AD844u, 0x1AD84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD84Cu;
label_1ad84c:
    // 0x1ad84c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ad84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad850: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ad850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad854: 0xc44c0150  lwc1        $f12, 0x150($v0)
    ctx->pc = 0x1ad854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ad858: 0xc064d10  jal         func_193440
    ctx->pc = 0x1AD858u;
    SET_GPR_U32(ctx, 31, 0x1AD860u);
    ctx->pc = 0x193440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193440u, 0x1AD858u, 0x1AD860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD860u;
label_1ad860:
    // 0x1ad860: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ad860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad864: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x1ad864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1ad868: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1AD868u;
    {
        const bool branch_taken_0x1ad868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad868) {
            ctx->pc = 0x1AD898u;
            goto label_1ad898;
        }
    }
    ctx->pc = 0x1AD870u;
    // 0x1ad870: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ad870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ad874: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ad874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ad878: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1ad878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1ad87c: 0x27859468  addiu       $a1, $gp, -0x6B98
    ctx->pc = 0x1ad87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939752));
    // 0x1ad880: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ad880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad884: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1ad884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad888: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1AD888u;
    SET_GPR_U32(ctx, 31, 0x1AD890u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1AD888u, 0x1AD890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD890u;
label_1ad890:
    // 0x1ad890: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ad890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad894: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x1ad894u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
label_1ad898:
    // 0x1ad898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ad898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad89c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ad89cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ad8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD8A8u;
    // 0x1ad8a8: 0x0  nop
    ctx->pc = 0x1ad8a8u;
    // NOP
    // 0x1ad8ac: 0x0  nop
    ctx->pc = 0x1ad8acu;
    // NOP
    ctx->pc = 0x1ad8b0u;
}
