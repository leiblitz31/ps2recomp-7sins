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

// Function: sub_00223710
// Address: 0x223710 - 0x223870
void sub_00223710_0x223710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223710_0x223710");
#endif

    switch (ctx->pc) {
        case 0x223744u: goto label_223744;
        case 0x223758u: goto label_223758;
        case 0x22377cu: goto label_22377c;
        case 0x2237a4u: goto label_2237a4;
        case 0x2237c8u: goto label_2237c8;
        case 0x2237f0u: goto label_2237f0;
        case 0x223820u: goto label_223820;
        case 0x223830u: goto label_223830;
        case 0x22384cu: goto label_22384c;
        default: break;
    }

    ctx->pc = 0x223710u;

    // 0x223710: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x223710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x223714: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x223714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x223718: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x223718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22371c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22371cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x223720: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x223720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x223724: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x223724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x223728: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x223728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x22372c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x22372cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x223730: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x223730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x223734: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x223734u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x223738: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x223738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22373c: 0xc088e90  jal         func_223A40
    ctx->pc = 0x22373Cu;
    SET_GPR_U32(ctx, 31, 0x223744u);
    ctx->pc = 0x223A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A40u, 0x22373Cu, 0x223744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223744u;
label_223744:
    // 0x223744: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x223744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x223748: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x223748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x22374c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x22374cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x223750: 0xc041954  jal         func_106550
    ctx->pc = 0x223750u;
    SET_GPR_U32(ctx, 31, 0x223758u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x223750u, 0x223758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223758u;
label_223758:
    // 0x223758: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x223758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x22375c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22375cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x223760: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x223760u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x223764: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x223764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x223768: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x223768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x22376c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22376cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223770: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x223770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223774: 0xc0894c0  jal         func_225300
    ctx->pc = 0x223774u;
    SET_GPR_U32(ctx, 31, 0x22377Cu);
    ctx->pc = 0x225300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225300u, 0x223774u, 0x22377Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22377Cu;
label_22377c:
    // 0x22377c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22377cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223780: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x223780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223784: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x223784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x223788: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x223788u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x22378c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x22378cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x223790: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x223790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x223794: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x223794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223798: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x223798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x22379c: 0xc088e70  jal         func_2239C0
    ctx->pc = 0x22379Cu;
    SET_GPR_U32(ctx, 31, 0x2237A4u);
    ctx->pc = 0x2239C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239C0u, 0x22379Cu, 0x2237A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2237A4u;
label_2237a4:
    // 0x2237a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2237a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2237a8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2237a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2237ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2237acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2237b0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2237B0u;
    {
        const bool branch_taken_0x2237b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2237b0) {
            ctx->pc = 0x2237D4u;
            goto label_2237d4;
        }
    }
    ctx->pc = 0x2237B8u;
    // 0x2237b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2237b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2237bc: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2237bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2237c0: 0xc088ea0  jal         func_223A80
    ctx->pc = 0x2237C0u;
    SET_GPR_U32(ctx, 31, 0x2237C8u);
    ctx->pc = 0x223A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A80u, 0x2237C0u, 0x2237C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2237C8u;
label_2237c8:
    // 0x2237c8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2237c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2237cc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2237CCu;
    {
        const bool branch_taken_0x2237cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2237cc) {
            ctx->pc = 0x2237F4u;
            goto label_2237f4;
        }
    }
    ctx->pc = 0x2237D4u;
label_2237d4:
    // 0x2237d4: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x2237d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x2237d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2237d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2237dc: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2237dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2237e0: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x2237e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2237e4: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x2237e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x2237e8: 0xc088e50  jal         func_223940
    ctx->pc = 0x2237E8u;
    SET_GPR_U32(ctx, 31, 0x2237F0u);
    ctx->pc = 0x223940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223940u, 0x2237E8u, 0x2237F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2237F0u;
label_2237f0:
    // 0x2237f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2237f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2237f4:
    // 0x2237f4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x2237f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2237f8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2237F8u;
    {
        const bool branch_taken_0x2237f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2237f8) {
            ctx->pc = 0x223824u;
            goto label_223824;
        }
    }
    ctx->pc = 0x223800u;
    // 0x223800: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x223800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x223804: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x223804u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x223808: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x223808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22380c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x22380cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x223810: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x223810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223814: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x223814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x223818: 0xc088e70  jal         func_2239C0
    ctx->pc = 0x223818u;
    SET_GPR_U32(ctx, 31, 0x223820u);
    ctx->pc = 0x2239C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239C0u, 0x223818u, 0x223820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223820u;
label_223820:
    // 0x223820: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x223820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_223824:
    // 0x223824: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x223824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x223828: 0xc088e30  jal         func_2238C0
    ctx->pc = 0x223828u;
    SET_GPR_U32(ctx, 31, 0x223830u);
    ctx->pc = 0x2238C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238C0u, 0x223828u, 0x223830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223830u;
label_223830:
    // 0x223830: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x223830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x223834: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x223834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x223838: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x223838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22383c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22383cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223840: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x223840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223844: 0xc088e1c  jal         func_223870
    ctx->pc = 0x223844u;
    SET_GPR_U32(ctx, 31, 0x22384Cu);
    ctx->pc = 0x223870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223870u, 0x223844u, 0x22384Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22384Cu;
label_22384c:
    // 0x22384c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22384cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x223850: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x223850u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223854: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x223854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223858: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x223858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22385c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x22385cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x223860: 0x3e00008  jr          $ra
    ctx->pc = 0x223860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223868u;
    // 0x223868: 0x0  nop
    ctx->pc = 0x223868u;
    // NOP
    // 0x22386c: 0x0  nop
    ctx->pc = 0x22386cu;
    // NOP
    ctx->pc = 0x223870u;
}
