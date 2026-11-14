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

// Function: sub_0046C6B0
// Address: 0x46c6b0 - 0x46c810
void sub_0046C6B0_0x46c6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046C6B0_0x46c6b0");
#endif

    switch (ctx->pc) {
        case 0x46c6e4u: goto label_46c6e4;
        case 0x46c6f8u: goto label_46c6f8;
        case 0x46c71cu: goto label_46c71c;
        case 0x46c744u: goto label_46c744;
        case 0x46c768u: goto label_46c768;
        case 0x46c790u: goto label_46c790;
        case 0x46c7c0u: goto label_46c7c0;
        case 0x46c7d0u: goto label_46c7d0;
        case 0x46c7ecu: goto label_46c7ec;
        default: break;
    }

    ctx->pc = 0x46c6b0u;

    // 0x46c6b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x46c6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x46c6b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x46c6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x46c6b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46c6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x46c6bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46c6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x46c6c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46c6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46c6c4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x46c6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x46c6c8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x46c6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x46c6cc: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x46c6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x46c6d0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x46c6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x46c6d4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x46c6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x46c6d8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x46c6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46c6dc: 0xc11a44c  jal         func_469130
    ctx->pc = 0x46C6DCu;
    SET_GPR_U32(ctx, 31, 0x46C6E4u);
    ctx->pc = 0x469130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469130u, 0x46C6DCu, 0x46C6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C6E4u;
label_46c6e4:
    // 0x46c6e4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x46c6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x46c6e8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x46c6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x46c6ec: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x46c6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x46c6f0: 0xc041954  jal         func_106550
    ctx->pc = 0x46C6F0u;
    SET_GPR_U32(ctx, 31, 0x46C6F8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x46C6F0u, 0x46C6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C6F8u;
label_46c6f8:
    // 0x46c6f8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x46c6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x46c6fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46c6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46c700: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x46c700u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x46c704: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x46c704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46c708: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x46c708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x46c70c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x46c70cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c710: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x46c710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c714: 0xc11b494  jal         func_46D250
    ctx->pc = 0x46C714u;
    SET_GPR_U32(ctx, 31, 0x46C71Cu);
    ctx->pc = 0x46D250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D250u, 0x46C714u, 0x46C71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C71Cu;
label_46c71c:
    // 0x46c71c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x46c71cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c720: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x46c720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c724: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x46c724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46c728: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x46c728u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x46c72c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46c72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46c730: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x46c730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x46c734: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x46c734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c738: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x46c738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x46c73c: 0xc11b258  jal         func_46C960
    ctx->pc = 0x46C73Cu;
    SET_GPR_U32(ctx, 31, 0x46C744u);
    ctx->pc = 0x46C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C960u, 0x46C73Cu, 0x46C744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C744u;
label_46c744:
    // 0x46c744: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46c744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c748: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x46c748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x46c74c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x46c750: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x46C750u;
    {
        const bool branch_taken_0x46c750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x46c750) {
            ctx->pc = 0x46C774u;
            goto label_46c774;
        }
    }
    ctx->pc = 0x46C758u;
    // 0x46c758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46c758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c75c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x46c75cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46c760: 0xc11b278  jal         func_46C9E0
    ctx->pc = 0x46C760u;
    SET_GPR_U32(ctx, 31, 0x46C768u);
    ctx->pc = 0x46C9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C9E0u, 0x46C760u, 0x46C768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C768u;
label_46c768:
    // 0x46c768: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x46c768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x46c76c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x46C76Cu;
    {
        const bool branch_taken_0x46c76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c76c) {
            ctx->pc = 0x46C794u;
            goto label_46c794;
        }
    }
    ctx->pc = 0x46C774u;
label_46c774:
    // 0x46c774: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x46c774u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x46c778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46c778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c77c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x46c77cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x46c780: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x46c780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46c784: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x46c784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x46c788: 0xc11b238  jal         func_46C8E0
    ctx->pc = 0x46C788u;
    SET_GPR_U32(ctx, 31, 0x46C790u);
    ctx->pc = 0x46C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C8E0u, 0x46C788u, 0x46C790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C790u;
label_46c790:
    // 0x46c790: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46c790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46c794:
    // 0x46c794: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x46c794u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x46c798: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x46C798u;
    {
        const bool branch_taken_0x46c798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46c798) {
            ctx->pc = 0x46C7C4u;
            goto label_46c7c4;
        }
    }
    ctx->pc = 0x46C7A0u;
    // 0x46c7a0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x46c7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46c7a4: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x46c7a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x46c7a8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x46c7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x46c7ac: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x46c7acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x46c7b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x46c7b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c7b4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x46c7b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46c7b8: 0xc11b258  jal         func_46C960
    ctx->pc = 0x46C7B8u;
    SET_GPR_U32(ctx, 31, 0x46C7C0u);
    ctx->pc = 0x46C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C960u, 0x46C7B8u, 0x46C7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C7C0u;
label_46c7c0:
    // 0x46c7c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46c7c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46c7c4:
    // 0x46c7c4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x46c7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46c7c8: 0xc11b218  jal         func_46C860
    ctx->pc = 0x46C7C8u;
    SET_GPR_U32(ctx, 31, 0x46C7D0u);
    ctx->pc = 0x46C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C860u, 0x46C7C8u, 0x46C7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C7D0u;
label_46c7d0:
    // 0x46c7d0: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x46c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x46c7d4: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x46c7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x46c7d8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x46c7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46c7dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46c7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c7e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x46c7e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c7e4: 0xc11b204  jal         func_46C810
    ctx->pc = 0x46C7E4u;
    SET_GPR_U32(ctx, 31, 0x46C7ECu);
    ctx->pc = 0x46C810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C810u, 0x46C7E4u, 0x46C7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C7ECu;
label_46c7ec:
    // 0x46c7ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x46c7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46c7f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46c7f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46c7f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46c7f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c7f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46c7f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46c7fc: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x46c7fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x46c800: 0x3e00008  jr          $ra
    ctx->pc = 0x46C800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46C808u;
    // 0x46c808: 0x0  nop
    ctx->pc = 0x46c808u;
    // NOP
    // 0x46c80c: 0x0  nop
    ctx->pc = 0x46c80cu;
    // NOP
    ctx->pc = 0x46c810u;
}
