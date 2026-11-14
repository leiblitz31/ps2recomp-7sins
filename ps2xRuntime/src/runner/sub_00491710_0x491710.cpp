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

// Function: sub_00491710
// Address: 0x491710 - 0x491870
void sub_00491710_0x491710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00491710_0x491710");
#endif

    switch (ctx->pc) {
        case 0x491744u: goto label_491744;
        case 0x491758u: goto label_491758;
        case 0x49177cu: goto label_49177c;
        case 0x4917a4u: goto label_4917a4;
        case 0x4917c8u: goto label_4917c8;
        case 0x4917f0u: goto label_4917f0;
        case 0x491820u: goto label_491820;
        case 0x491830u: goto label_491830;
        case 0x49184cu: goto label_49184c;
        default: break;
    }

    ctx->pc = 0x491710u;

    // 0x491710: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x491710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x491714: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x491714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x491718: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x491718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x49171c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49171cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x491720: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x491720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x491724: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x491724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x491728: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x491728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x49172c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x49172cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x491730: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x491730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x491734: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x491734u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x491738: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x491738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x49173c: 0xc124690  jal         func_491A40
    ctx->pc = 0x49173Cu;
    SET_GPR_U32(ctx, 31, 0x491744u);
    ctx->pc = 0x491A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491A40u, 0x49173Cu, 0x491744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491744u;
label_491744:
    // 0x491744: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x491744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x491748: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x491748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x49174c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x49174cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x491750: 0xc041954  jal         func_106550
    ctx->pc = 0x491750u;
    SET_GPR_U32(ctx, 31, 0x491758u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x491750u, 0x491758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491758u;
label_491758:
    // 0x491758: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x491758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x49175c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x49175cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x491760: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x491760u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x491764: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x491764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x491768: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x491768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x49176c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x49176cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x491770: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x491770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x491774: 0xc124bfc  jal         func_492FF0
    ctx->pc = 0x491774u;
    SET_GPR_U32(ctx, 31, 0x49177Cu);
    ctx->pc = 0x492FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492FF0u, 0x491774u, 0x49177Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49177Cu;
label_49177c:
    // 0x49177c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x49177cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x491780: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x491780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x491784: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x491784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x491788: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x491788u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x49178c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x49178cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x491790: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x491790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x491794: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x491794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x491798: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x491798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x49179c: 0xc124670  jal         func_4919C0
    ctx->pc = 0x49179Cu;
    SET_GPR_U32(ctx, 31, 0x4917A4u);
    ctx->pc = 0x4919C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4919C0u, 0x49179Cu, 0x4917A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4917A4u;
label_4917a4:
    // 0x4917a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4917a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4917a8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x4917a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4917ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4917acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4917b0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4917B0u;
    {
        const bool branch_taken_0x4917b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4917b0) {
            ctx->pc = 0x4917D4u;
            goto label_4917d4;
        }
    }
    ctx->pc = 0x4917B8u;
    // 0x4917b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4917b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4917bc: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x4917bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4917c0: 0xc1246a0  jal         func_491A80
    ctx->pc = 0x4917C0u;
    SET_GPR_U32(ctx, 31, 0x4917C8u);
    ctx->pc = 0x491A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491A80u, 0x4917C0u, 0x4917C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4917C8u;
label_4917c8:
    // 0x4917c8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4917c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x4917cc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4917CCu;
    {
        const bool branch_taken_0x4917cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4917cc) {
            ctx->pc = 0x4917F4u;
            goto label_4917f4;
        }
    }
    ctx->pc = 0x4917D4u;
label_4917d4:
    // 0x4917d4: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x4917d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x4917d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4917d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4917dc: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x4917dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4917e0: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x4917e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4917e4: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x4917e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x4917e8: 0xc124650  jal         func_491940
    ctx->pc = 0x4917E8u;
    SET_GPR_U32(ctx, 31, 0x4917F0u);
    ctx->pc = 0x491940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491940u, 0x4917E8u, 0x4917F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4917F0u;
label_4917f0:
    // 0x4917f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4917f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4917f4:
    // 0x4917f4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x4917f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4917f8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4917F8u;
    {
        const bool branch_taken_0x4917f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4917f8) {
            ctx->pc = 0x491824u;
            goto label_491824;
        }
    }
    ctx->pc = 0x491800u;
    // 0x491800: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x491800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x491804: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x491804u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x491808: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x491808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x49180c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x49180cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x491810: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x491810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x491814: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x491814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x491818: 0xc124670  jal         func_4919C0
    ctx->pc = 0x491818u;
    SET_GPR_U32(ctx, 31, 0x491820u);
    ctx->pc = 0x4919C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4919C0u, 0x491818u, 0x491820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491820u;
label_491820:
    // 0x491820: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x491820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_491824:
    // 0x491824: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x491824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x491828: 0xc124630  jal         func_4918C0
    ctx->pc = 0x491828u;
    SET_GPR_U32(ctx, 31, 0x491830u);
    ctx->pc = 0x4918C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4918C0u, 0x491828u, 0x491830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491830u;
label_491830:
    // 0x491830: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x491830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x491834: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x491834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x491838: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x491838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x49183c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x49183cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x491840: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x491840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x491844: 0xc12461c  jal         func_491870
    ctx->pc = 0x491844u;
    SET_GPR_U32(ctx, 31, 0x49184Cu);
    ctx->pc = 0x491870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491870u, 0x491844u, 0x49184Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49184Cu;
label_49184c:
    // 0x49184c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x49184cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x491850: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x491850u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x491854: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x491854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x491858: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x491858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49185c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x49185cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x491860: 0x3e00008  jr          $ra
    ctx->pc = 0x491860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x491868u;
    // 0x491868: 0x0  nop
    ctx->pc = 0x491868u;
    // NOP
    // 0x49186c: 0x0  nop
    ctx->pc = 0x49186cu;
    // NOP
    ctx->pc = 0x491870u;
}
