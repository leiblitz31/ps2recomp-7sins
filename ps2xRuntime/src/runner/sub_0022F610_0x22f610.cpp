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

// Function: sub_0022F610
// Address: 0x22f610 - 0x22f770
void sub_0022F610_0x22f610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F610_0x22f610");
#endif

    switch (ctx->pc) {
        case 0x22f644u: goto label_22f644;
        case 0x22f658u: goto label_22f658;
        case 0x22f67cu: goto label_22f67c;
        case 0x22f6a4u: goto label_22f6a4;
        case 0x22f6c8u: goto label_22f6c8;
        case 0x22f6f0u: goto label_22f6f0;
        case 0x22f720u: goto label_22f720;
        case 0x22f730u: goto label_22f730;
        case 0x22f754u: goto label_22f754;
        default: break;
    }

    ctx->pc = 0x22f610u;

    // 0x22f610: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x22f610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x22f614: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22f614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22f618: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22f618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22f61c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22f61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22f620: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22f620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22f624: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x22f624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x22f628: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x22f628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x22f62c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x22f62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x22f630: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x22f630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x22f634: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x22f634u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x22f638: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x22f638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22f63c: 0xc08bd50  jal         func_22F540
    ctx->pc = 0x22F63Cu;
    SET_GPR_U32(ctx, 31, 0x22F644u);
    ctx->pc = 0x22F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F540u, 0x22F63Cu, 0x22F644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F644u;
label_22f644:
    // 0x22f644: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x22f644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x22f648: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x22f648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x22f64c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x22f64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x22f650: 0xc041954  jal         func_106550
    ctx->pc = 0x22F650u;
    SET_GPR_U32(ctx, 31, 0x22F658u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x22F650u, 0x22F658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F658u;
label_22f658:
    // 0x22f658: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x22f658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x22f65c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f660: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x22f660u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22f664: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x22f664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22f668: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x22f668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x22f66c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22f66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f670: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22f670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f674: 0xc08ca8c  jal         func_232A30
    ctx->pc = 0x22F674u;
    SET_GPR_U32(ctx, 31, 0x22F67Cu);
    ctx->pc = 0x232A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232A30u, 0x22F674u, 0x22F67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F67Cu;
label_22f67c:
    // 0x22f67c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22f67cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f680: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x22f680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f684: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x22f684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22f688: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x22f688u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x22f68c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x22f68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f690: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x22f690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22f694: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22f694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f698: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x22f698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x22f69c: 0xc08be2c  jal         func_22F8B0
    ctx->pc = 0x22F69Cu;
    SET_GPR_U32(ctx, 31, 0x22F6A4u);
    ctx->pc = 0x22F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F8B0u, 0x22F69Cu, 0x22F6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F6A4u;
label_22f6a4:
    // 0x22f6a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22f6a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f6a8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x22f6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22f6ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f6b0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22F6B0u;
    {
        const bool branch_taken_0x22f6b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22f6b0) {
            ctx->pc = 0x22F6D4u;
            goto label_22f6d4;
        }
    }
    ctx->pc = 0x22F6B8u;
    // 0x22f6b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f6bc: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x22f6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22f6c0: 0xc08be4c  jal         func_22F930
    ctx->pc = 0x22F6C0u;
    SET_GPR_U32(ctx, 31, 0x22F6C8u);
    ctx->pc = 0x22F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F930u, 0x22F6C0u, 0x22F6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F6C8u;
label_22f6c8:
    // 0x22f6c8: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x22f6c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x22f6cc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22F6CCu;
    {
        const bool branch_taken_0x22f6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f6cc) {
            ctx->pc = 0x22F6F4u;
            goto label_22f6f4;
        }
    }
    ctx->pc = 0x22F6D4u;
label_22f6d4:
    // 0x22f6d4: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x22f6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x22f6d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f6dc: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x22f6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22f6e0: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x22f6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22f6e4: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x22f6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x22f6e8: 0xc08be0c  jal         func_22F830
    ctx->pc = 0x22F6E8u;
    SET_GPR_U32(ctx, 31, 0x22F6F0u);
    ctx->pc = 0x22F830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F830u, 0x22F6E8u, 0x22F6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F6F0u;
label_22f6f0:
    // 0x22f6f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22f6f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22f6f4:
    // 0x22f6f4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x22f6f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22f6f8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22F6F8u;
    {
        const bool branch_taken_0x22f6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f6f8) {
            ctx->pc = 0x22F724u;
            goto label_22f724;
        }
    }
    ctx->pc = 0x22F700u;
    // 0x22f700: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x22f700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22f704: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x22f704u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x22f708: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x22f708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22f70c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x22f70cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22f710: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22f710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f714: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x22f714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22f718: 0xc08be2c  jal         func_22F8B0
    ctx->pc = 0x22F718u;
    SET_GPR_U32(ctx, 31, 0x22F720u);
    ctx->pc = 0x22F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F8B0u, 0x22F718u, 0x22F720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F720u;
label_22f720:
    // 0x22f720: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22f720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22f724:
    // 0x22f724: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x22f724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22f728: 0xc08bdf0  jal         func_22F7C0
    ctx->pc = 0x22F728u;
    SET_GPR_U32(ctx, 31, 0x22F730u);
    ctx->pc = 0x22F7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F7C0u, 0x22F728u, 0x22F730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F730u;
label_22f730:
    // 0x22f730: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x22f730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x22f734: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x22f734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x22f738: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22f738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22f73c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x22f73cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x22f740: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x22f740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22f744: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22f744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f748: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22f748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f74c: 0xc08bddc  jal         func_22F770
    ctx->pc = 0x22F74Cu;
    SET_GPR_U32(ctx, 31, 0x22F754u);
    ctx->pc = 0x22F770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F770u, 0x22F74Cu, 0x22F754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F754u;
label_22f754:
    // 0x22f754: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22f754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22f758: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22f758u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f75c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22f75cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f760: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22f760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f764: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x22f764u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x22f768: 0x3e00008  jr          $ra
    ctx->pc = 0x22F768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F770u;
}
