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

// Function: sub_003A15D8
// Address: 0x3a15d8 - 0x3a1740
void sub_003A15D8_0x3a15d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A15D8_0x3a15d8");
#endif

    switch (ctx->pc) {
        case 0x3a1614u: goto label_3a1614;
        default: break;
    }

    ctx->pc = 0x3a15d8u;

    // 0x3a15d8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3a15d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a15dc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A15DCu;
    {
        const bool branch_taken_0x3a15dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a15dc) {
            ctx->pc = 0x3A15E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A15DCu;
            // 0x3a15e0: 0x8c430014  lw          $v1, 0x14($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A15ECu;
            goto label_3a15ec;
        }
    }
    ctx->pc = 0x3A15E4u;
    // 0x3a15e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A15E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A15E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A15E4u;
        // 0x3a15e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A15E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A15ECu;
label_3a15ec:
    // 0x3a15ec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A15ECu;
    {
        const bool branch_taken_0x3a15ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a15ec) {
            ctx->pc = 0x3A15FCu;
            goto label_3a15fc;
        }
    }
    ctx->pc = 0x3A15F4u;
    // 0x3a15f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A15F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A15F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A15F4u;
        // 0x3a15f8: 0xac650018  sw          $a1, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A15F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A15FCu;
label_3a15fc:
    // 0x3a15fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A15FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A15FCu;
        // 0x3a1600: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A15FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1604u;
    // 0x3a1604: 0x0  nop
    ctx->pc = 0x3a1604u;
    // NOP
    // 0x3a1608: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3a1608u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a160c: 0x54e00003  bnel        $a3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A160Cu;
    {
        const bool branch_taken_0x3a160c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a160c) {
            ctx->pc = 0x3A1610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A160Cu;
            // 0x3a1610: 0x8ce40014  lw          $a0, 0x14($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A161Cu;
            goto label_3a161c;
        }
    }
    ctx->pc = 0x3A1614u;
label_3a1614:
    // 0x3a1614: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1614u;
        // 0x3a1618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A161Cu;
label_3a161c:
    // 0x3a161c: 0x1080fffd  beqz        $a0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x3A161Cu;
    {
        const bool branch_taken_0x3a161c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a161c) {
            ctx->pc = 0x3A1614u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a1614;
        }
    }
    ctx->pc = 0x3A1624u;
    // 0x3a1624: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A1624u;
    {
        const bool branch_taken_0x3a1624 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1624u;
        // 0x3a1628: 0x240203f0  addiu       $v0, $zero, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1624) {
            ctx->pc = 0x3A1640u;
            goto label_3a1640;
        }
    }
    ctx->pc = 0x3A162Cu;
    // 0x3a162c: 0x240203d0  addiu       $v0, $zero, 0x3D0
    ctx->pc = 0x3a162cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 976));
    // 0x3a1630: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3a1630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3a1634: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x3a1634u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x3a1638: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A1638u;
    {
        const bool branch_taken_0x3a1638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1638u;
        // 0x3a163c: 0xac830020  sw          $v1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1638) {
            ctx->pc = 0x3A164Cu;
            goto label_3a164c;
        }
    }
    ctx->pc = 0x3A1640u;
label_3a1640:
    // 0x3a1640: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x3a1640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x3a1644: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3a1644u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3a1648: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x3a1648u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
label_3a164c:
    // 0x3a164c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x3a164cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x3a1650: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x3a1650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x3a1654: 0x8c860024  lw          $a2, 0x24($a0)
    ctx->pc = 0x3a1654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x3a1658: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x3a1658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x3a165c: 0x34a50404  ori         $a1, $a1, 0x404
    ctx->pc = 0x3a165cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1028);
    // 0x3a1660: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3a1660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3a1664: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a1664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1668: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a1668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a166c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3a166cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3a1670: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x3a1670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1674: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3a1674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3a1678: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x3a1678u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x3a167c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A167Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A167Cu;
        // 0x3a1680: 0x7cc30000  sq          $v1, 0x0($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A167Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1684u;
    // 0x3a1684: 0x0  nop
    ctx->pc = 0x3a1684u;
    // NOP
    // 0x3a1688: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x3a1688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3a168c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3a168cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3a1690: 0x240303d0  addiu       $v1, $zero, 0x3D0
    ctx->pc = 0x3a1690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 976));
    // 0x3a1694: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3a1694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3a1698: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x3a1698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x3a169c: 0x24a40037  addiu       $a0, $a1, 0x37
    ctx->pc = 0x3a169cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 55));
    // 0x3a16a0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3a16a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3a16a4: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x3a16a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x3a16a8: 0xaca60020  sw          $a2, 0x20($a1)
    ctx->pc = 0x3a16a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 6));
    // 0x3a16ac: 0x3c096c01  lui         $t1, 0x6C01
    ctx->pc = 0x3a16acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)27649 << 16));
    // 0x3a16b0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x3a16b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x3a16b4: 0x3c0b0100  lui         $t3, 0x100
    ctx->pc = 0x3a16b4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)256 << 16));
    // 0x3a16b8: 0x356b0404  ori         $t3, $t3, 0x404
    ctx->pc = 0x3a16b8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)1028);
    // 0x3a16bc: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x3a16bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x3a16c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a16c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a16c4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x3a16c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x3a16c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3a16c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a16cc: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x3a16ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x3a16d0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3a16d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a16d4: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x3a16d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a16d8: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x3a16d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x3a16dc: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x3a16dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x3a16e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a16e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a16e4: 0xaca40024  sw          $a0, 0x24($a1)
    ctx->pc = 0x3a16e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 4));
    // 0x3a16e8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3a16e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3a16ec: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x3a16ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x3a16f0: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x3a16f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x3a16f4: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x3a16f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x3a16f8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3a16f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3a16fc: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x3a16fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x3a1700: 0x706a1b89  pcpyld      $v1, $v1, $t2
    ctx->pc = 0x3a1700u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x3a1704: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3a1704u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3a1708: 0xa0a80005  sb          $t0, 0x5($a1)
    ctx->pc = 0x3a1708u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 8));
    // 0x3a170c: 0xa0a60009  sb          $a2, 0x9($a1)
    ctx->pc = 0x3a170cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 6));
    // 0x3a1710: 0xa0a7000c  sb          $a3, 0xC($a1)
    ctx->pc = 0x3a1710u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 12), (uint8_t)GPR_U32(ctx, 7));
    // 0x3a1714: 0xa0a0000d  sb          $zero, 0xD($a1)
    ctx->pc = 0x3a1714u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a1718: 0xa0a60001  sb          $a2, 0x1($a1)
    ctx->pc = 0x3a1718u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x3a171c: 0xa0a70002  sb          $a3, 0x2($a1)
    ctx->pc = 0x3a171cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x3a1720: 0xa0a60003  sb          $a2, 0x3($a1)
    ctx->pc = 0x3a1720u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x3a1724: 0xa0a60004  sb          $a2, 0x4($a1)
    ctx->pc = 0x3a1724u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 6));
    // 0x3a1728: 0xa0a60006  sb          $a2, 0x6($a1)
    ctx->pc = 0x3a1728u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 6));
    // 0x3a172c: 0xa0a00008  sb          $zero, 0x8($a1)
    ctx->pc = 0x3a172cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a1730: 0xa0a0000a  sb          $zero, 0xA($a1)
    ctx->pc = 0x3a1730u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a1734: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1734u;
        // 0x3a1738: 0xa0a7000b  sb          $a3, 0xB($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 11), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A173Cu;
    // 0x3a173c: 0x0  nop
    ctx->pc = 0x3a173cu;
    // NOP
    ctx->pc = 0x3a1740u;
}
