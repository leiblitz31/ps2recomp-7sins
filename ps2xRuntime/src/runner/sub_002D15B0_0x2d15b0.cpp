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

// Function: sub_002D15B0
// Address: 0x2d15b0 - 0x2d16c0
void sub_002D15B0_0x2d15b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D15B0_0x2d15b0");
#endif

    switch (ctx->pc) {
        case 0x2d15e4u: goto label_2d15e4;
        case 0x2d15f8u: goto label_2d15f8;
        case 0x2d161cu: goto label_2d161c;
        case 0x2d1638u: goto label_2d1638;
        case 0x2d1650u: goto label_2d1650;
        case 0x2d1678u: goto label_2d1678;
        case 0x2d1688u: goto label_2d1688;
        case 0x2d16a4u: goto label_2d16a4;
        default: break;
    }

    ctx->pc = 0x2d15b0u;

    // 0x2d15b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2d15b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2d15b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d15b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d15b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d15b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d15bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d15bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d15c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d15c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d15c4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2d15c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2d15c8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2d15c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2d15cc: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2d15ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2d15d0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x2d15d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x2d15d4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x2d15d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x2d15d8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2d15d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d15dc: 0xc0b4638  jal         func_2D18E0
    ctx->pc = 0x2D15DCu;
    SET_GPR_U32(ctx, 31, 0x2D15E4u);
    ctx->pc = 0x2D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D18E0u, 0x2D15DCu, 0x2D15E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D15E4u;
label_2d15e4:
    // 0x2d15e4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2d15e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2d15e8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2d15e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2d15ec: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2d15ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d15f0: 0xc041954  jal         func_106550
    ctx->pc = 0x2D15F0u;
    SET_GPR_U32(ctx, 31, 0x2D15F8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x2D15F0u, 0x2D15F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D15F8u;
label_2d15f8:
    // 0x2d15f8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2d15f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2d15fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d15fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1600: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2d1600u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d1604: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d1604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d1608: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2d1608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2d160c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d160cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1610: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d1610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1614: 0xc0b6328  jal         func_2D8CA0
    ctx->pc = 0x2D1614u;
    SET_GPR_U32(ctx, 31, 0x2D161Cu);
    ctx->pc = 0x2D8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8CA0u, 0x2D1614u, 0x2D161Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D161Cu;
label_2d161c:
    // 0x2d161c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d161cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1620: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d1620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d1624: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d1624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1628: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2d1628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d162c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2d162cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1630: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2D1630u;
    SET_GPR_U32(ctx, 31, 0x2D1638u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2D1630u, 0x2D1638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1638u;
label_2d1638:
    // 0x2d1638: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d163c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d163cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1640: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2d1640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d1644: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x2d1644u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d1648: 0xc0b45e4  jal         func_2D1790
    ctx->pc = 0x2D1648u;
    SET_GPR_U32(ctx, 31, 0x2D1650u);
    ctx->pc = 0x2D1790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1790u, 0x2D1648u, 0x2D1650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1650u;
label_2d1650:
    // 0x2d1650: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1654: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x2d1654u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d1658: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D1658u;
    {
        const bool branch_taken_0x2d1658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1658) {
            ctx->pc = 0x2D167Cu;
            goto label_2d167c;
        }
    }
    ctx->pc = 0x2D1660u;
    // 0x2d1660: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d1660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d1664: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2d1664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d1668: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2d1668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d166c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d166cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1670: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2D1670u;
    SET_GPR_U32(ctx, 31, 0x2D1678u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2D1670u, 0x2D1678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1678u;
label_2d1678:
    // 0x2d1678: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d167c:
    // 0x2d167c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2d167cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d1680: 0xc0b45c4  jal         func_2D1710
    ctx->pc = 0x2D1680u;
    SET_GPR_U32(ctx, 31, 0x2D1688u);
    ctx->pc = 0x2D1710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1710u, 0x2D1680u, 0x2D1688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1688u;
label_2d1688:
    // 0x2d1688: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2d1688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2d168c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x2d168cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2d1690: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2d1690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d1694: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d1694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1698: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d1698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d169c: 0xc0b45b0  jal         func_2D16C0
    ctx->pc = 0x2D169Cu;
    SET_GPR_U32(ctx, 31, 0x2D16A4u);
    ctx->pc = 0x2D16C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D16C0u, 0x2D169Cu, 0x2D16A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D16A4u;
label_2d16a4:
    // 0x2d16a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d16a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d16a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d16a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d16ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d16acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d16b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d16b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d16b4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2d16b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2d16b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D16B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D16B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D16C0u;
}
