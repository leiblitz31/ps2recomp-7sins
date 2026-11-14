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

// Function: sub_0010D780
// Address: 0x10d780 - 0x10d8e0
void sub_0010D780_0x10d780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D780_0x10d780");
#endif

    switch (ctx->pc) {
        case 0x10d7b4u: goto label_10d7b4;
        case 0x10d7c8u: goto label_10d7c8;
        case 0x10d7ecu: goto label_10d7ec;
        case 0x10d814u: goto label_10d814;
        case 0x10d838u: goto label_10d838;
        case 0x10d860u: goto label_10d860;
        case 0x10d890u: goto label_10d890;
        case 0x10d8a0u: goto label_10d8a0;
        case 0x10d8c4u: goto label_10d8c4;
        default: break;
    }

    ctx->pc = 0x10d780u;

    // 0x10d780: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x10d780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x10d784: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10d784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10d788: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10d788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10d78c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10d78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10d790: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10d790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10d794: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x10d794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x10d798: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x10d798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x10d79c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x10d79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x10d7a0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x10d7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x10d7a4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x10d7a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x10d7a8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x10d7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d7ac: 0xc043104  jal         func_10C410
    ctx->pc = 0x10D7ACu;
    SET_GPR_U32(ctx, 31, 0x10D7B4u);
    ctx->pc = 0x10C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C410u, 0x10D7ACu, 0x10D7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D7B4u;
label_10d7b4:
    // 0x10d7b4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x10d7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x10d7b8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x10d7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x10d7bc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x10d7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x10d7c0: 0xc041954  jal         func_106550
    ctx->pc = 0x10D7C0u;
    SET_GPR_U32(ctx, 31, 0x10D7C8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x10D7C0u, 0x10D7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D7C8u;
label_10d7c8:
    // 0x10d7c8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x10d7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x10d7cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d7d0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x10d7d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10d7d4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x10d7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d7d8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x10d7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x10d7dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10d7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d7e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10d7e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d7e4: 0xc043700  jal         func_10DC00
    ctx->pc = 0x10D7E4u;
    SET_GPR_U32(ctx, 31, 0x10D7ECu);
    ctx->pc = 0x10DC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DC00u, 0x10D7E4u, 0x10D7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D7ECu;
label_10d7ec:
    // 0x10d7ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10d7ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d7f0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x10d7f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d7f4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x10d7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d7f8: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x10d7f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x10d7fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x10d7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d800: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x10d800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10d804: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10d804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d808: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x10d808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x10d80c: 0xc0436e0  jal         func_10DB80
    ctx->pc = 0x10D80Cu;
    SET_GPR_U32(ctx, 31, 0x10D814u);
    ctx->pc = 0x10DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DB80u, 0x10D80Cu, 0x10D814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D814u;
label_10d814:
    // 0x10d814: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10d814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d818: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x10d818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10d81c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10d81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d820: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10D820u;
    {
        const bool branch_taken_0x10d820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10d820) {
            ctx->pc = 0x10D844u;
            goto label_10d844;
        }
    }
    ctx->pc = 0x10D828u;
    // 0x10d828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10d828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d82c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x10d82cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10d830: 0xc04282c  jal         func_10A0B0
    ctx->pc = 0x10D830u;
    SET_GPR_U32(ctx, 31, 0x10D838u);
    ctx->pc = 0x10A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A0B0u, 0x10D830u, 0x10D838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D838u;
label_10d838:
    // 0x10d838: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x10d838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x10d83c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10D83Cu;
    {
        const bool branch_taken_0x10d83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d83c) {
            ctx->pc = 0x10D864u;
            goto label_10d864;
        }
    }
    ctx->pc = 0x10D844u;
label_10d844:
    // 0x10d844: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x10d844u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x10d848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10d848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d84c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x10d84cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10d850: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x10d850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10d854: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x10d854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x10d858: 0xc043668  jal         func_10D9A0
    ctx->pc = 0x10D858u;
    SET_GPR_U32(ctx, 31, 0x10D860u);
    ctx->pc = 0x10D9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D9A0u, 0x10D858u, 0x10D860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D860u;
label_10d860:
    // 0x10d860: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10d860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10d864:
    // 0x10d864: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x10d864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10d868: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10D868u;
    {
        const bool branch_taken_0x10d868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d868) {
            ctx->pc = 0x10D894u;
            goto label_10d894;
        }
    }
    ctx->pc = 0x10D870u;
    // 0x10d870: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x10d870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d874: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x10d874u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x10d878: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x10d878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10d87c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x10d87cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10d880: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10d880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d884: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x10d884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10d888: 0xc0436e0  jal         func_10DB80
    ctx->pc = 0x10D888u;
    SET_GPR_U32(ctx, 31, 0x10D890u);
    ctx->pc = 0x10DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DB80u, 0x10D888u, 0x10D890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D890u;
label_10d890:
    // 0x10d890: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10d890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10d894:
    // 0x10d894: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x10d894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d898: 0xc04364c  jal         func_10D930
    ctx->pc = 0x10D898u;
    SET_GPR_U32(ctx, 31, 0x10D8A0u);
    ctx->pc = 0x10D930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D930u, 0x10D898u, 0x10D8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D8A0u;
label_10d8a0:
    // 0x10d8a0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x10d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x10d8a4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x10d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x10d8a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10d8ac: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x10d8acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x10d8b0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x10d8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d8b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10d8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d8b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10d8b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d8bc: 0xc043638  jal         func_10D8E0
    ctx->pc = 0x10D8BCu;
    SET_GPR_U32(ctx, 31, 0x10D8C4u);
    ctx->pc = 0x10D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D8E0u, 0x10D8BCu, 0x10D8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D8C4u;
label_10d8c4:
    // 0x10d8c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10d8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d8c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10d8c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d8cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10d8ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d8d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10d8d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d8d4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x10d8d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x10d8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x10D8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D8E0u;
}
