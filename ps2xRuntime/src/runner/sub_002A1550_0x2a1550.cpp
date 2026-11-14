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

// Function: sub_002A1550
// Address: 0x2a1550 - 0x2a16d0
void sub_002A1550_0x2a1550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1550_0x2a1550");
#endif

    switch (ctx->pc) {
        case 0x2a15c0u: goto label_2a15c0;
        case 0x2a15e8u: goto label_2a15e8;
        case 0x2a15f0u: goto label_2a15f0;
        case 0x2a1618u: goto label_2a1618;
        case 0x2a16a4u: goto label_2a16a4;
        default: break;
    }

    ctx->pc = 0x2a1550u;

    // 0x2a1550: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a1550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a1554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a1554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a1558: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a1558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2a155c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2a155cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2a1560: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x2a1560u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
    // 0x2a1564: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2a1564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a1568: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a1568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a156c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a156cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1570: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a1570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a1574: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a1574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1578: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a1578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a157c: 0x8c4201e8  lw          $v0, 0x1E8($v0)
    ctx->pc = 0x2a157cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 488)));
    // 0x2a1580: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x2A1580u;
    {
        const bool branch_taken_0x2a1580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1580) {
            ctx->pc = 0x2A16B0u;
            goto label_2a16b0;
        }
    }
    ctx->pc = 0x2A1588u;
    // 0x2a1588: 0x93a20030  lbu         $v0, 0x30($sp)
    ctx->pc = 0x2a1588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a158c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2a158cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a1590: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a1590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1594: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2A1594u;
    {
        const bool branch_taken_0x2a1594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a1594) {
            ctx->pc = 0x2A1660u;
            goto label_2a1660;
        }
    }
    ctx->pc = 0x2A159Cu;
    // 0x2a159c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2a159cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a15a0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a15a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a15a4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a15a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a15a8: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a15a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a15ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a15acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a15b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a15b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a15b4: 0x8c4401e8  lw          $a0, 0x1E8($v0)
    ctx->pc = 0x2a15b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 488)));
    // 0x2a15b8: 0xc0a63c8  jal         func_298F20
    ctx->pc = 0x2A15B8u;
    SET_GPR_U32(ctx, 31, 0x2A15C0u);
    ctx->pc = 0x298F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298F20u, 0x2A15B8u, 0x2A15C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A15C0u;
label_2a15c0:
    // 0x2a15c0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2a15c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a15c4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a15c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a15c8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a15c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a15cc: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a15ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a15d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a15d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a15d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a15d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a15d8: 0x8c4401e8  lw          $a0, 0x1E8($v0)
    ctx->pc = 0x2a15d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 488)));
    // 0x2a15dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a15dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a15e0: 0xc12346c  jal         func_48D1B0
    ctx->pc = 0x2A15E0u;
    SET_GPR_U32(ctx, 31, 0x2A15E8u);
    ctx->pc = 0x48D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D1B0u, 0x2A15E0u, 0x2A15E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A15E8u;
label_2a15e8:
    // 0x2a15e8: 0xc122470  jal         func_4891C0
    ctx->pc = 0x2A15E8u;
    SET_GPR_U32(ctx, 31, 0x2A15F0u);
    ctx->pc = 0x4891C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891C0u, 0x2A15E8u, 0x2A15F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A15F0u;
label_2a15f0:
    // 0x2a15f0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2a15f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a15f4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2a15f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2a15f8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2a15f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a15fc: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x2a15fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2a1600: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2a1600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1604: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a1604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a1608: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a1608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a160c: 0x246501e8  addiu       $a1, $v1, 0x1E8
    ctx->pc = 0x2a160cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 488));
    // 0x2a1610: 0xc123c84  jal         func_48F210
    ctx->pc = 0x2A1610u;
    SET_GPR_U32(ctx, 31, 0x2A1618u);
    ctx->pc = 0x48F210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F210u, 0x2A1610u, 0x2A1618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1618u;
label_2a1618:
    // 0x2a1618: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2a1618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a161c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a161cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a1620: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a1620u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1624: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a1624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a1628: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a1628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a162c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a162cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1630: 0xac4001e8  sw          $zero, 0x1E8($v0)
    ctx->pc = 0x2a1630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 488), GPR_U32(ctx, 0));
    // 0x2a1634: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2a1634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a1638: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a1638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a163c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a163cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1640: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a1640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a1644: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a1644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1648: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2a1648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a164c: 0x8c6201c0  lw          $v0, 0x1C0($v1)
    ctx->pc = 0x2a164cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 448)));
    // 0x2a1650: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a1650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a1654: 0xac6201c0  sw          $v0, 0x1C0($v1)
    ctx->pc = 0x2a1654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 448), GPR_U32(ctx, 2));
    // 0x2a1658: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2A1658u;
    {
        const bool branch_taken_0x2a1658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1658) {
            ctx->pc = 0x2A16A4u;
            goto label_2a16a4;
        }
    }
    ctx->pc = 0x2A1660u;
label_2a1660:
    // 0x2a1660: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2a1660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a1664: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a1664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a1668: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a1668u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a166c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a166cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a1670: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a1670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1674: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a1674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1678: 0x8c4201e8  lw          $v0, 0x1E8($v0)
    ctx->pc = 0x2a1678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 488)));
    // 0x2a167c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2a167cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2a1680: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2a1680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a1684: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a1684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a1688: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a1688u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a168c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a168cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a1690: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a1690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1694: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a1694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1698: 0x8c4401e8  lw          $a0, 0x1E8($v0)
    ctx->pc = 0x2a1698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 488)));
    // 0x2a169c: 0xc12323c  jal         func_48C8F0
    ctx->pc = 0x2A169Cu;
    SET_GPR_U32(ctx, 31, 0x2A16A4u);
    ctx->pc = 0x48C8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C8F0u, 0x2A169Cu, 0x2A16A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A16A4u;
label_2a16a4:
    // 0x2a16a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a16a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a16a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A16A8u;
    {
        const bool branch_taken_0x2a16a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a16a8) {
            ctx->pc = 0x2A16B4u;
            goto label_2a16b4;
        }
    }
    ctx->pc = 0x2A16B0u;
label_2a16b0:
    // 0x2a16b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a16b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a16b4:
    // 0x2a16b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a16b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a16b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2a16b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a16bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A16BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A16BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A16C4u;
    // 0x2a16c4: 0x0  nop
    ctx->pc = 0x2a16c4u;
    // NOP
    // 0x2a16c8: 0x0  nop
    ctx->pc = 0x2a16c8u;
    // NOP
    // 0x2a16cc: 0x0  nop
    ctx->pc = 0x2a16ccu;
    // NOP
    ctx->pc = 0x2a16d0u;
}
