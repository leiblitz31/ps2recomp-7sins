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

// Function: sub_001A15C0
// Address: 0x1a15c0 - 0x1a16d0
void sub_001A15C0_0x1a15c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A15C0_0x1a15c0");
#endif

    switch (ctx->pc) {
        case 0x1a15f4u: goto label_1a15f4;
        case 0x1a1608u: goto label_1a1608;
        case 0x1a162cu: goto label_1a162c;
        case 0x1a1648u: goto label_1a1648;
        case 0x1a1660u: goto label_1a1660;
        case 0x1a1688u: goto label_1a1688;
        case 0x1a1698u: goto label_1a1698;
        case 0x1a16b4u: goto label_1a16b4;
        default: break;
    }

    ctx->pc = 0x1a15c0u;

    // 0x1a15c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1a15c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1a15c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a15c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a15c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a15c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a15cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a15ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a15d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a15d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a15d4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1a15d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1a15d8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1a15d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1a15dc: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1a15dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1a15e0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x1a15e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x1a15e4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x1a15e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x1a15e8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a15e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a15ec: 0xc0683d8  jal         func_1A0F60
    ctx->pc = 0x1A15ECu;
    SET_GPR_U32(ctx, 31, 0x1A15F4u);
    ctx->pc = 0x1A0F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0F60u, 0x1A15ECu, 0x1A15F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A15F4u;
label_1a15f4:
    // 0x1a15f4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1a15f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1a15f8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1a15f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1a15fc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1a15fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a1600: 0xc041954  jal         func_106550
    ctx->pc = 0x1A1600u;
    SET_GPR_U32(ctx, 31, 0x1A1608u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x1A1600u, 0x1A1608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1608u;
label_1a1608:
    // 0x1a1608: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1a1608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1a160c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a160cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a1610: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1a1610u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a1614: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a1614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a1618: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1a1618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1a161c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a161cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1620: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a1620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1624: 0xc068690  jal         func_1A1A40
    ctx->pc = 0x1A1624u;
    SET_GPR_U32(ctx, 31, 0x1A162Cu);
    ctx->pc = 0x1A1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1A40u, 0x1A1624u, 0x1A162Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A162Cu;
label_1a162c:
    // 0x1a162c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a162cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1630: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a1630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a1634: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a1634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a1638: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1a1638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a163c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a163cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1640: 0xc041934  jal         func_1064D0
    ctx->pc = 0x1A1640u;
    SET_GPR_U32(ctx, 31, 0x1A1648u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x1A1640u, 0x1A1648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1648u;
label_1a1648:
    // 0x1a1648: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a1648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a164c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a164cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1650: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1a1650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a1654: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1a1654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a1658: 0xc0685e8  jal         func_1A17A0
    ctx->pc = 0x1A1658u;
    SET_GPR_U32(ctx, 31, 0x1A1660u);
    ctx->pc = 0x1A17A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A17A0u, 0x1A1658u, 0x1A1660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1660u;
label_1a1660:
    // 0x1a1660: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a1660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1664: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x1a1664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a1668: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A1668u;
    {
        const bool branch_taken_0x1a1668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1668) {
            ctx->pc = 0x1A168Cu;
            goto label_1a168c;
        }
    }
    ctx->pc = 0x1A1670u;
    // 0x1a1670: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a1670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a1674: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1a1674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a1678: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1a1678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a167c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a167cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1680: 0xc041934  jal         func_1064D0
    ctx->pc = 0x1A1680u;
    SET_GPR_U32(ctx, 31, 0x1A1688u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x1A1680u, 0x1A1688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1688u;
label_1a1688:
    // 0x1a1688: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a1688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a168c:
    // 0x1a168c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a168cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a1690: 0xc0685c8  jal         func_1A1720
    ctx->pc = 0x1A1690u;
    SET_GPR_U32(ctx, 31, 0x1A1698u);
    ctx->pc = 0x1A1720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1720u, 0x1A1690u, 0x1A1698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1698u;
label_1a1698:
    // 0x1a1698: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1a1698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1a169c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x1a169cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a16a0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a16a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a16a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a16a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a16a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a16a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a16ac: 0xc0685b4  jal         func_1A16D0
    ctx->pc = 0x1A16ACu;
    SET_GPR_U32(ctx, 31, 0x1A16B4u);
    ctx->pc = 0x1A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16D0u, 0x1A16ACu, 0x1A16B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A16B4u;
label_1a16b4:
    // 0x1a16b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a16b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a16b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a16b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a16bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a16bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a16c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a16c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a16c4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1a16c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a16c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A16C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A16C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A16D0u;
}
