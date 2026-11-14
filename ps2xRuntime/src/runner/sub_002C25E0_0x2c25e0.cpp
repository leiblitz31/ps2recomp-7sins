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

// Function: sub_002C25E0
// Address: 0x2c25e0 - 0x2c2860
void sub_002C25E0_0x2c25e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C25E0_0x2c25e0");
#endif

    switch (ctx->pc) {
        case 0x2c2618u: goto label_2c2618;
        case 0x2c262cu: goto label_2c262c;
        case 0x2c2648u: goto label_2c2648;
        case 0x2c265cu: goto label_2c265c;
        case 0x2c2670u: goto label_2c2670;
        case 0x2c2684u: goto label_2c2684;
        case 0x2c26a4u: goto label_2c26a4;
        case 0x2c26b0u: goto label_2c26b0;
        case 0x2c26dcu: goto label_2c26dc;
        case 0x2c26f0u: goto label_2c26f0;
        case 0x2c2700u: goto label_2c2700;
        case 0x2c2740u: goto label_2c2740;
        case 0x2c2758u: goto label_2c2758;
        case 0x2c2764u: goto label_2c2764;
        case 0x2c277cu: goto label_2c277c;
        case 0x2c2790u: goto label_2c2790;
        case 0x2c27a0u: goto label_2c27a0;
        case 0x2c27d8u: goto label_2c27d8;
        case 0x2c27e4u: goto label_2c27e4;
        case 0x2c27fcu: goto label_2c27fc;
        case 0x2c281cu: goto label_2c281c;
        default: break;
    }

    ctx->pc = 0x2c25e0u;

    // 0x2c25e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2c25e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2c25e4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2c25e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2c25e8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c25e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2c25ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c25ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c25f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c25f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c25f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c25f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c25f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c25f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c25fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c25fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c2600: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c2600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c2604: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x2c2604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x2c2608: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x2c2608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x2c260c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2c260cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c2610: 0xc048094  jal         func_120250
    ctx->pc = 0x2C2610u;
    SET_GPR_U32(ctx, 31, 0x2C2618u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2C2610u, 0x2C2618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2618u;
label_2c2618:
    // 0x2c2618: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c2618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c261c: 0x24050405  addiu       $a1, $zero, 0x405
    ctx->pc = 0x2c261cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1029));
    // 0x2c2620: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c2620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2624: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2C2624u;
    SET_GPR_U32(ctx, 31, 0x2C262Cu);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2C2624u, 0x2C262Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C262Cu;
label_2c262c:
    // 0x2c262c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2c262cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2630: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c2630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2c2634: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x2c2634u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c2638: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c2638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c263c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c263cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c2640: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C2640u;
    SET_GPR_U32(ctx, 31, 0x2C2648u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C2640u, 0x2C2648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2648u;
label_2c2648:
    // 0x2c2648: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c2648u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c264c: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x2c264cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2650: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c2650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2654: 0xc096880  jal         func_25A200
    ctx->pc = 0x2C2654u;
    SET_GPR_U32(ctx, 31, 0x2C265Cu);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2C2654u, 0x2C265Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C265Cu;
label_2c265c:
    // 0x2c265c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C265Cu;
    {
        const bool branch_taken_0x2c265c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c265c) {
            ctx->pc = 0x2C2674u;
            goto label_2c2674;
        }
    }
    ctx->pc = 0x2C2664u;
    // 0x2c2664: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c2664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2668: 0xc096880  jal         func_25A200
    ctx->pc = 0x2C2668u;
    SET_GPR_U32(ctx, 31, 0x2C2670u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2C2668u, 0x2C2670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2670u;
label_2c2670:
    // 0x2c2670: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c2670u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c2674:
    // 0x2c2674: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2c2674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c2678: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x2c2678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x2c267c: 0xc0afca0  jal         func_2BF280
    ctx->pc = 0x2C267Cu;
    SET_GPR_U32(ctx, 31, 0x2C2684u);
    ctx->pc = 0x2BF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF280u, 0x2C267Cu, 0x2C2684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2684u;
label_2c2684:
    // 0x2c2684: 0x569023  subu        $s2, $v0, $s6
    ctx->pc = 0x2c2684u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2c2688: 0x6410002  bgez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C2688u;
    {
        const bool branch_taken_0x2c2688 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x2c2688) {
            ctx->pc = 0x2C2694u;
            goto label_2c2694;
        }
    }
    ctx->pc = 0x2C2690u;
    // 0x2c2690: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c2690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c2694:
    // 0x2c2694: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2c2694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c2698: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x2c2698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x2c269c: 0xc0afc98  jal         func_2BF260
    ctx->pc = 0x2C269Cu;
    SET_GPR_U32(ctx, 31, 0x2C26A4u);
    ctx->pc = 0x2BF260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF260u, 0x2C269Cu, 0x2C26A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C26A4u;
label_2c26a4:
    // 0x2c26a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c26a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c26a8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2C26A8u;
    {
        const bool branch_taken_0x2c26a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c26a8) {
            ctx->pc = 0x2C2730u;
            goto label_2c2730;
        }
    }
    ctx->pc = 0x2C26B0u;
label_2c26b0:
    // 0x2c26b0: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C26B0u;
    {
        const bool branch_taken_0x2c26b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c26b0) {
            ctx->pc = 0x2C26C4u;
            goto label_2c26c4;
        }
    }
    ctx->pc = 0x2C26B8u;
    // 0x2c26b8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2c26b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2c26bc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2C26BCu;
    {
        const bool branch_taken_0x2c26bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c26bc) {
            ctx->pc = 0x2C272Cu;
            goto label_2c272c;
        }
    }
    ctx->pc = 0x2C26C4u;
label_2c26c4:
    // 0x2c26c4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c26c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c26c8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2c26c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c26cc: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x2c26ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x2c26d0: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x2c26d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c26d4: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x2C26D4u;
    SET_GPR_U32(ctx, 31, 0x2C26DCu);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x2C26D4u, 0x2C26DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C26DCu;
label_2c26dc:
    // 0x2c26dc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C26DCu;
    {
        const bool branch_taken_0x2c26dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c26dc) {
            ctx->pc = 0x2C272Cu;
            goto label_2c272c;
        }
    }
    ctx->pc = 0x2C26E4u;
    // 0x2c26e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c26e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c26e8: 0xc048b18  jal         func_122C60
    ctx->pc = 0x2C26E8u;
    SET_GPR_U32(ctx, 31, 0x2C26F0u);
    ctx->pc = 0x122C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122C60u, 0x2C26E8u, 0x2C26F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C26F0u;
label_2c26f0:
    // 0x2c26f0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c26f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c26f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c26f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c26f8: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x2C26F8u;
    SET_GPR_U32(ctx, 31, 0x2C2700u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x2C26F8u, 0x2C2700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2700u;
label_2c2700:
    // 0x2c2700: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C2700u;
    {
        const bool branch_taken_0x2c2700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2700) {
            ctx->pc = 0x2C272Cu;
            goto label_2c272c;
        }
    }
    ctx->pc = 0x2C2708u;
    // 0x2c2708: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c2708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c270c: 0x90420018  lbu         $v0, 0x18($v0)
    ctx->pc = 0x2c270cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2c2710: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c2710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c2714: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c2714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2718: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2718u;
    {
        const bool branch_taken_0x2c2718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c2718) {
            ctx->pc = 0x2C272Cu;
            goto label_2c272c;
        }
    }
    ctx->pc = 0x2C2720u;
    // 0x2c2720: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2724: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2C2724u;
    {
        const bool branch_taken_0x2c2724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2724) {
            ctx->pc = 0x2C2828u;
            goto label_2c2828;
        }
    }
    ctx->pc = 0x2C272Cu;
label_2c272c:
    // 0x2c272c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2c272cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2c2730:
    // 0x2c2730: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2c2730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c2734: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x2c2734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x2c2738: 0xc0afc90  jal         func_2BF240
    ctx->pc = 0x2C2738u;
    SET_GPR_U32(ctx, 31, 0x2C2740u);
    ctx->pc = 0x2BF240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF240u, 0x2C2738u, 0x2C2740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2740u;
label_2c2740:
    // 0x2c2740: 0x1622ffdb  bne         $s1, $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2C2740u;
    {
        const bool branch_taken_0x2c2740 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c2740) {
            ctx->pc = 0x2C26B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c26b0;
        }
    }
    ctx->pc = 0x2C2748u;
    // 0x2c2748: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2c2748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c274c: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x2c274cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x2c2750: 0xc0afc98  jal         func_2BF260
    ctx->pc = 0x2C2750u;
    SET_GPR_U32(ctx, 31, 0x2C2758u);
    ctx->pc = 0x2BF260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF260u, 0x2C2750u, 0x2C2758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2758u;
label_2c2758:
    // 0x2c2758: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c2758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c275c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2C275Cu;
    {
        const bool branch_taken_0x2c275c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c275c) {
            ctx->pc = 0x2C280Cu;
            goto label_2c280c;
        }
    }
    ctx->pc = 0x2C2764u;
label_2c2764:
    // 0x2c2764: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c2764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c2768: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2c2768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c276c: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x2c276cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x2c2770: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x2c2770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c2774: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x2C2774u;
    SET_GPR_U32(ctx, 31, 0x2C277Cu);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x2C2774u, 0x2C277Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C277Cu;
label_2c277c:
    // 0x2c277c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C277Cu;
    {
        const bool branch_taken_0x2c277c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c277c) {
            ctx->pc = 0x2C2808u;
            goto label_2c2808;
        }
    }
    ctx->pc = 0x2C2784u;
    // 0x2c2784: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c2784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2788: 0xc048b18  jal         func_122C60
    ctx->pc = 0x2C2788u;
    SET_GPR_U32(ctx, 31, 0x2C2790u);
    ctx->pc = 0x122C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122C60u, 0x2C2788u, 0x2C2790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2790u;
label_2c2790:
    // 0x2c2790: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2c2790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c2794: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c2794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2798: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x2C2798u;
    SET_GPR_U32(ctx, 31, 0x2C27A0u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x2C2798u, 0x2C27A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C27A0u;
label_2c27a0:
    // 0x2c27a0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C27A0u;
    {
        const bool branch_taken_0x2c27a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c27a0) {
            ctx->pc = 0x2C2808u;
            goto label_2c2808;
        }
    }
    ctx->pc = 0x2C27A8u;
    // 0x2c27a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c27a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c27ac: 0x90420018  lbu         $v0, 0x18($v0)
    ctx->pc = 0x2c27acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2c27b0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c27b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c27b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c27b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c27b8: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C27B8u;
    {
        const bool branch_taken_0x2c27b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c27b8) {
            ctx->pc = 0x2C2808u;
            goto label_2c2808;
        }
    }
    ctx->pc = 0x2C27C0u;
    // 0x2c27c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c27c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c27c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C27C4u;
    {
        const bool branch_taken_0x2c27c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c27c4) {
            ctx->pc = 0x2C27E8u;
            goto label_2c27e8;
        }
    }
    ctx->pc = 0x2C27CCu;
    // 0x2c27cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2c27ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c27d0: 0xc0afcb0  jal         func_2BF2C0
    ctx->pc = 0x2C27D0u;
    SET_GPR_U32(ctx, 31, 0x2C27D8u);
    ctx->pc = 0x2BF2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF2C0u, 0x2C27D0u, 0x2C27D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C27D8u;
label_2c27d8:
    // 0x2c27d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2c27d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c27dc: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2C27DCu;
    SET_GPR_U32(ctx, 31, 0x2C27E4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2C27DCu, 0x2C27E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C27E4u;
label_2c27e4:
    // 0x2c27e4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2c27e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2c27e8:
    // 0x2c27e8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2c27e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c27ec: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x2c27ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x2c27f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c27f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c27f4: 0xc0b0a18  jal         func_2C2860
    ctx->pc = 0x2C27F4u;
    SET_GPR_U32(ctx, 31, 0x2C27FCu);
    ctx->pc = 0x2C2860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2860u, 0x2C27F4u, 0x2C27FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C27FCu;
label_2c27fc:
    // 0x2c27fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c27fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2800: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C2800u;
    {
        const bool branch_taken_0x2c2800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2800) {
            ctx->pc = 0x2C280Cu;
            goto label_2c280c;
        }
    }
    ctx->pc = 0x2C2808u;
label_2c2808:
    // 0x2c2808: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2c2808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2c280c:
    // 0x2c280c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2c280cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c2810: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x2c2810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x2c2814: 0xc0afc90  jal         func_2BF240
    ctx->pc = 0x2C2814u;
    SET_GPR_U32(ctx, 31, 0x2C281Cu);
    ctx->pc = 0x2BF240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF240u, 0x2C2814u, 0x2C281Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C281Cu;
label_2c281c:
    // 0x2c281c: 0x1602ffd1  bne         $s0, $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x2C281Cu;
    {
        const bool branch_taken_0x2c281c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c281c) {
            ctx->pc = 0x2C2764u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2764;
        }
    }
    ctx->pc = 0x2C2824u;
    // 0x2c2824: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c2824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c2828:
    // 0x2c2828: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2c2828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c282c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c282cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c2830: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c2830u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c2834: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c2834u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c2838: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c2838u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c283c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c283cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c2840: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c2840u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2844: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c2844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2848: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2c2848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2c284c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C284Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C284Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2854u;
    // 0x2c2854: 0x0  nop
    ctx->pc = 0x2c2854u;
    // NOP
    // 0x2c2858: 0x0  nop
    ctx->pc = 0x2c2858u;
    // NOP
    // 0x2c285c: 0x0  nop
    ctx->pc = 0x2c285cu;
    // NOP
    ctx->pc = 0x2c2860u;
}
