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

// Function: sub_00252680
// Address: 0x252680 - 0x2527e0
void sub_00252680_0x252680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252680_0x252680");
#endif

    switch (ctx->pc) {
        case 0x2526b4u: goto label_2526b4;
        case 0x2526c8u: goto label_2526c8;
        case 0x2526ecu: goto label_2526ec;
        case 0x252714u: goto label_252714;
        case 0x252738u: goto label_252738;
        case 0x252760u: goto label_252760;
        case 0x252790u: goto label_252790;
        case 0x2527a0u: goto label_2527a0;
        case 0x2527bcu: goto label_2527bc;
        default: break;
    }

    ctx->pc = 0x252680u;

    // 0x252680: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x252680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x252684: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x252684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x252688: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x252688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25268c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25268cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x252690: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x252690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x252694: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x252694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x252698: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x252698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x25269c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x25269cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2526a0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x2526a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x2526a4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x2526a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x2526a8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2526a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2526ac: 0xc0948c0  jal         func_252300
    ctx->pc = 0x2526ACu;
    SET_GPR_U32(ctx, 31, 0x2526B4u);
    ctx->pc = 0x252300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252300u, 0x2526ACu, 0x2526B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2526B4u;
label_2526b4:
    // 0x2526b4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2526b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2526b8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2526b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2526bc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2526bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2526c0: 0xc041954  jal         func_106550
    ctx->pc = 0x2526C0u;
    SET_GPR_U32(ctx, 31, 0x2526C8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x2526C0u, 0x2526C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2526C8u;
label_2526c8:
    // 0x2526c8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2526c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2526cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2526ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2526d0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2526d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2526d4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2526d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2526d8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2526d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2526dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2526dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2526e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2526e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2526e4: 0xc094b18  jal         func_252C60
    ctx->pc = 0x2526E4u;
    SET_GPR_U32(ctx, 31, 0x2526ECu);
    ctx->pc = 0x252C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252C60u, 0x2526E4u, 0x2526ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2526ECu;
label_2526ec:
    // 0x2526ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2526ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2526f0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2526f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2526f4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2526f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2526f8: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x2526f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x2526fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2526fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252700: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x252700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x252704: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x252704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252708: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x252708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x25270c: 0xc094ac0  jal         func_252B00
    ctx->pc = 0x25270Cu;
    SET_GPR_U32(ctx, 31, 0x252714u);
    ctx->pc = 0x252B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252B00u, 0x25270Cu, 0x252714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252714u;
label_252714:
    // 0x252714: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x252714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252718: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x252718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25271c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25271cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252720: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x252720u;
    {
        const bool branch_taken_0x252720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x252720) {
            ctx->pc = 0x252744u;
            goto label_252744;
        }
    }
    ctx->pc = 0x252728u;
    // 0x252728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25272c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x25272cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x252730: 0xc094a4c  jal         func_252930
    ctx->pc = 0x252730u;
    SET_GPR_U32(ctx, 31, 0x252738u);
    ctx->pc = 0x252930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252930u, 0x252730u, 0x252738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252738u;
label_252738:
    // 0x252738: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x252738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x25273c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25273Cu;
    {
        const bool branch_taken_0x25273c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25273c) {
            ctx->pc = 0x252764u;
            goto label_252764;
        }
    }
    ctx->pc = 0x252744u;
label_252744:
    // 0x252744: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x252744u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x252748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25274c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x25274cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x252750: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x252750u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x252754: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x252754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x252758: 0xc094a2c  jal         func_2528B0
    ctx->pc = 0x252758u;
    SET_GPR_U32(ctx, 31, 0x252760u);
    ctx->pc = 0x2528B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2528B0u, 0x252758u, 0x252760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252760u;
label_252760:
    // 0x252760: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x252760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_252764:
    // 0x252764: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x252764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x252768: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x252768u;
    {
        const bool branch_taken_0x252768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252768) {
            ctx->pc = 0x252794u;
            goto label_252794;
        }
    }
    ctx->pc = 0x252770u;
    // 0x252770: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x252770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x252774: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x252774u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x252778: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x252778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25277c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x25277cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x252780: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x252780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252784: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x252784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x252788: 0xc094ac0  jal         func_252B00
    ctx->pc = 0x252788u;
    SET_GPR_U32(ctx, 31, 0x252790u);
    ctx->pc = 0x252B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252B00u, 0x252788u, 0x252790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252790u;
label_252790:
    // 0x252790: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x252790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_252794:
    // 0x252794: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x252794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x252798: 0xc094a0c  jal         func_252830
    ctx->pc = 0x252798u;
    SET_GPR_U32(ctx, 31, 0x2527A0u);
    ctx->pc = 0x252830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252830u, 0x252798u, 0x2527A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2527A0u;
label_2527a0:
    // 0x2527a0: 0x121140  sll         $v0, $s2, 5
    ctx->pc = 0x2527a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x2527a4: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x2527a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2527a8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2527a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2527ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2527acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2527b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2527b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2527b4: 0xc0949f8  jal         func_2527E0
    ctx->pc = 0x2527B4u;
    SET_GPR_U32(ctx, 31, 0x2527BCu);
    ctx->pc = 0x2527E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2527E0u, 0x2527B4u, 0x2527BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2527BCu;
label_2527bc:
    // 0x2527bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2527bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2527c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2527c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2527c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2527c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2527c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2527c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2527cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2527ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2527d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2527D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2527D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2527D8u;
    // 0x2527d8: 0x0  nop
    ctx->pc = 0x2527d8u;
    // NOP
    // 0x2527dc: 0x0  nop
    ctx->pc = 0x2527dcu;
    // NOP
    ctx->pc = 0x2527e0u;
}
