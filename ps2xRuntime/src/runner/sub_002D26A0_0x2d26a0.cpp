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

// Function: sub_002D26A0
// Address: 0x2d26a0 - 0x2d27b0
void sub_002D26A0_0x2d26a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D26A0_0x2d26a0");
#endif

    switch (ctx->pc) {
        case 0x2d26d4u: goto label_2d26d4;
        case 0x2d26e8u: goto label_2d26e8;
        case 0x2d270cu: goto label_2d270c;
        case 0x2d2728u: goto label_2d2728;
        case 0x2d2740u: goto label_2d2740;
        case 0x2d2768u: goto label_2d2768;
        case 0x2d2778u: goto label_2d2778;
        case 0x2d2794u: goto label_2d2794;
        default: break;
    }

    ctx->pc = 0x2d26a0u;

    // 0x2d26a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2d26a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2d26a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d26a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d26a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d26a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d26ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d26acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d26b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d26b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d26b4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2d26b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2d26b8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2d26b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2d26bc: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2d26bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2d26c0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x2d26c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x2d26c4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x2d26c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x2d26c8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2d26c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d26cc: 0xc0b4a3c  jal         func_2D28F0
    ctx->pc = 0x2D26CCu;
    SET_GPR_U32(ctx, 31, 0x2D26D4u);
    ctx->pc = 0x2D28F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D28F0u, 0x2D26CCu, 0x2D26D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D26D4u;
label_2d26d4:
    // 0x2d26d4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2d26d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2d26d8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2d26d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2d26dc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2d26dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d26e0: 0xc041954  jal         func_106550
    ctx->pc = 0x2D26E0u;
    SET_GPR_U32(ctx, 31, 0x2D26E8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x2D26E0u, 0x2D26E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D26E8u;
label_2d26e8:
    // 0x2d26e8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2d26e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2d26ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d26ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d26f0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2d26f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d26f4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d26f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d26f8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2d26f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2d26fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d26fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2700: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d2700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2704: 0xc0b62ec  jal         func_2D8BB0
    ctx->pc = 0x2D2704u;
    SET_GPR_U32(ctx, 31, 0x2D270Cu);
    ctx->pc = 0x2D8BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8BB0u, 0x2D2704u, 0x2D270Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D270Cu;
label_2d270c:
    // 0x2d270c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d270cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2710: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d2710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d2714: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d2714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d2718: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2d2718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d271c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2d271cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2720: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2D2720u;
    SET_GPR_U32(ctx, 31, 0x2D2728u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2D2720u, 0x2D2728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2728u;
label_2d2728:
    // 0x2d2728: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d272c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d272cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2730: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2d2730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d2734: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x2d2734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d2738: 0xc0b4a20  jal         func_2D2880
    ctx->pc = 0x2D2738u;
    SET_GPR_U32(ctx, 31, 0x2D2740u);
    ctx->pc = 0x2D2880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2880u, 0x2D2738u, 0x2D2740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2740u;
label_2d2740:
    // 0x2d2740: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2744: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x2d2744u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d2748: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D2748u;
    {
        const bool branch_taken_0x2d2748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2748) {
            ctx->pc = 0x2D276Cu;
            goto label_2d276c;
        }
    }
    ctx->pc = 0x2D2750u;
    // 0x2d2750: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d2750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d2754: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2d2754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d2758: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2d2758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d275c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d275cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2760: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2D2760u;
    SET_GPR_U32(ctx, 31, 0x2D2768u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2D2760u, 0x2D2768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2768u;
label_2d2768:
    // 0x2d2768: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d276c:
    // 0x2d276c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2d276cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d2770: 0xc0b4a00  jal         func_2D2800
    ctx->pc = 0x2D2770u;
    SET_GPR_U32(ctx, 31, 0x2D2778u);
    ctx->pc = 0x2D2800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2800u, 0x2D2770u, 0x2D2778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2778u;
label_2d2778:
    // 0x2d2778: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2d2778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2d277c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x2d277cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2d2780: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2d2780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d2784: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d2784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2788: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d2788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d278c: 0xc0b49ec  jal         func_2D27B0
    ctx->pc = 0x2D278Cu;
    SET_GPR_U32(ctx, 31, 0x2D2794u);
    ctx->pc = 0x2D27B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D27B0u, 0x2D278Cu, 0x2D2794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2794u;
label_2d2794:
    // 0x2d2794: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d2794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2798: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d2798u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d279c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d279cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d27a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d27a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d27a4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2d27a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2d27a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D27A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D27A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D27B0u;
}
