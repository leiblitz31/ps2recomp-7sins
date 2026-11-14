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

// Function: sub_00400650
// Address: 0x400650 - 0x400988
void sub_00400650_0x400650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00400650_0x400650");
#endif

    switch (ctx->pc) {
        case 0x4006ccu: goto label_4006cc;
        case 0x4006f0u: goto label_4006f0;
        case 0x4006f8u: goto label_4006f8;
        case 0x400714u: goto label_400714;
        case 0x400724u: goto label_400724;
        case 0x400770u: goto label_400770;
        case 0x400784u: goto label_400784;
        case 0x400790u: goto label_400790;
        case 0x4007acu: goto label_4007ac;
        case 0x4007bcu: goto label_4007bc;
        case 0x4007e0u: goto label_4007e0;
        case 0x400818u: goto label_400818;
        case 0x400820u: goto label_400820;
        case 0x400870u: goto label_400870;
        case 0x400884u: goto label_400884;
        case 0x400890u: goto label_400890;
        case 0x4008acu: goto label_4008ac;
        case 0x4008bcu: goto label_4008bc;
        case 0x4008e0u: goto label_4008e0;
        case 0x40091cu: goto label_40091c;
        case 0x40092cu: goto label_40092c;
        default: break;
    }

    ctx->pc = 0x400650u;

    // 0x400650: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x400650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x400654: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x400654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x400658: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x400658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x40065c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x40065cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x400660: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x400660u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400664: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x400664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x400668: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x400668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40066c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x40066cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x400670: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x400670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400674: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x400674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x400678: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x400678u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40067c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x40067cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x400680: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x400680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x400684: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x400684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x400688: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x400688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40068c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x40068cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x400690: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x400690u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x400694: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x400694u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x400698: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x400698u;
    {
        const bool branch_taken_0x400698 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x40069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400698u;
        // 0x40069c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400698) {
            ctx->pc = 0x4006B0u;
            goto label_4006b0;
        }
    }
    ctx->pc = 0x4006A0u;
    // 0x4006a0: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x4006a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
    // 0x4006a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4006a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4006a8: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x4006A8u;
    {
        const bool branch_taken_0x4006a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4006ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4006A8u;
        // 0x4006ac: 0xae510004  sw          $s1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4006a8) {
            ctx->pc = 0x400958u;
            goto label_400958;
        }
    }
    ctx->pc = 0x4006B0u;
label_4006b0:
    // 0x4006b0: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x4006b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x4006b4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4006B4u;
    {
        const bool branch_taken_0x4006b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4006b4) {
            ctx->pc = 0x4006B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4006B4u;
            // 0x4006b8: 0x8e03015c  lw          $v1, 0x15C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4006D0u;
            goto label_4006d0;
        }
    }
    ctx->pc = 0x4006BCu;
    // 0x4006bc: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4006bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4006c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4006c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4006c4: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x4006C4u;
    SET_GPR_U32(ctx, 31, 0x4006CCu);
    ctx->pc = 0x4006C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4006C4u;
    // 0x4006c8: 0x24a5fdf0  addiu       $a1, $a1, -0x210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x4006C4u, 0x4006CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4006CCu;
label_4006cc:
    // 0x4006cc: 0x8e03015c  lw          $v1, 0x15C($s0)
    ctx->pc = 0x4006ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
label_4006d0:
    // 0x4006d0: 0x26160110  addiu       $s6, $s0, 0x110
    ctx->pc = 0x4006d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x4006d4: 0x8e020158  lw          $v0, 0x158($s0)
    ctx->pc = 0x4006d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x4006d8: 0x3c140060  lui         $s4, 0x60
    ctx->pc = 0x4006d8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
    // 0x4006dc: 0xae110114  sw          $s1, 0x114($s0)
    ctx->pc = 0x4006dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 17));
    // 0x4006e0: 0xae130110  sw          $s3, 0x110($s0)
    ctx->pc = 0x4006e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 19));
    // 0x4006e4: 0xae030124  sw          $v1, 0x124($s0)
    ctx->pc = 0x4006e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
    // 0x4006e8: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x4006e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x4006ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4006ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4006f0:
    // 0x4006f0: 0xc0f5d8e  jal         func_3D7638
    ctx->pc = 0x4006F0u;
    SET_GPR_U32(ctx, 31, 0x4006F8u);
    ctx->pc = 0x4006F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4006F0u;
    // 0x4006f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7638u, 0x4006F0u, 0x4006F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4006F8u;
label_4006f8:
    // 0x4006f8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x4006F8u;
    {
        const bool branch_taken_0x4006f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4006f8) {
            ctx->pc = 0x4006FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4006F8u;
            // 0x4006fc: 0x8e020124  lw          $v0, 0x124($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x400728u;
            goto label_400728;
        }
    }
    ctx->pc = 0x400700u;
    // 0x400700: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x400700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x400704: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x400704u;
    {
        const bool branch_taken_0x400704 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x400708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400704u;
        // 0x400708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400704) {
            ctx->pc = 0x40071Cu;
            goto label_40071c;
        }
    }
    ctx->pc = 0x40070Cu;
    // 0x40070c: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x40070Cu;
    SET_GPR_U32(ctx, 31, 0x400714u);
    ctx->pc = 0x400710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40070Cu;
    // 0x400710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x40070Cu, 0x400714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400714u;
label_400714:
    // 0x400714: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x400714u;
    {
        const bool branch_taken_0x400714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x400718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400714u;
        // 0x400718: 0x8e020124  lw          $v0, 0x124($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400714) {
            ctx->pc = 0x400728u;
            goto label_400728;
        }
    }
    ctx->pc = 0x40071Cu;
label_40071c:
    // 0x40071c: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x40071Cu;
    SET_GPR_U32(ctx, 31, 0x400724u);
    ctx->pc = 0x400720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40071Cu;
    // 0x400720: 0x2685fe10  addiu       $a1, $s4, -0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x40071Cu, 0x400724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400724u;
label_400724:
    // 0x400724: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x400724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
label_400728:
    // 0x400728: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x400728u;
    {
        const bool branch_taken_0x400728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400728u;
        // 0x40072c: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400728) {
            ctx->pc = 0x400800u;
            goto label_400800;
        }
    }
    ctx->pc = 0x400730u;
    // 0x400730: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x400730u;
    {
        const bool branch_taken_0x400730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x400734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400730u;
        // 0x400734: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400730) {
            ctx->pc = 0x40080Cu;
            goto label_40080c;
        }
    }
    ctx->pc = 0x400738u;
    // 0x400738: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x400738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x40073c: 0x8e53000c  lw          $s3, 0xC($s2)
    ctx->pc = 0x40073cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x400740: 0xb3102a  slt         $v0, $a1, $s3
    ctx->pc = 0x400740u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x400744: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x400744u;
    {
        const bool branch_taken_0x400744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x400744) {
            ctx->pc = 0x400748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x400744u;
            // 0x400748: 0x9e05015c  lwu         $a1, 0x15C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4007B4u;
            goto label_4007b4;
        }
    }
    ctx->pc = 0x40074Cu;
    // 0x40074c: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x40074cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x400750: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x400750u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x400754: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x400754u;
    {
        const bool branch_taken_0x400754 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x400758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400754u;
        // 0x400758: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400754) {
            ctx->pc = 0x400798u;
            goto label_400798;
        }
    }
    ctx->pc = 0x40075Cu;
    // 0x40075c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x40075cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x400760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x400760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400764: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x400764u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x400768: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x400768u;
    SET_GPR_U32(ctx, 31, 0x400770u);
    ctx->pc = 0x40076Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400768u;
    // 0x40076c: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x400768u, 0x400770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400770u;
label_400770:
    // 0x400770: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x400770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400774: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x400774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400778: 0x133080  sll         $a2, $s3, 2
    ctx->pc = 0x400778u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x40077c: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x40077Cu;
    SET_GPR_U32(ctx, 31, 0x400784u);
    ctx->pc = 0x400780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40077Cu;
    // 0x400780: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x40077Cu, 0x400784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400784u;
label_400784:
    // 0x400784: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x400784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400788: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x400788u;
    SET_GPR_U32(ctx, 31, 0x400790u);
    ctx->pc = 0x40078Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400788u;
    // 0x40078c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x400788u, 0x400790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400790u;
label_400790:
    // 0x400790: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x400790u;
    {
        const bool branch_taken_0x400790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x400794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400790u;
        // 0x400794: 0x9e05015c  lwu         $a1, 0x15C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400790) {
            ctx->pc = 0x4007B4u;
            goto label_4007b4;
        }
    }
    ctx->pc = 0x400798u;
label_400798:
    // 0x400798: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x400798u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x40079c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40079cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4007a0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x4007a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x4007a4: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x4007A4u;
    SET_GPR_U32(ctx, 31, 0x4007ACu);
    ctx->pc = 0x4007A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4007A4u;
    // 0x4007a8: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x4007A4u, 0x4007ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4007ACu;
label_4007ac:
    // 0x4007ac: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x4007acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x4007b0: 0x9e05015c  lwu         $a1, 0x15C($s0)
    ctx->pc = 0x4007b0u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 348)));
label_4007b4:
    // 0x4007b4: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x4007B4u;
    SET_GPR_U32(ctx, 31, 0x4007BCu);
    ctx->pc = 0x4007B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4007B4u;
    // 0x4007b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x4007B4u, 0x4007BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4007BCu;
label_4007bc:
    // 0x4007bc: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4007bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4007c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4007c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4007c4: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x4007c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4007c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4007c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4007cc: 0x8e050158  lw          $a1, 0x158($s0)
    ctx->pc = 0x4007ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x4007d0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4007d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4007d4: 0x8e06015c  lw          $a2, 0x15C($s0)
    ctx->pc = 0x4007d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x4007d8: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x4007D8u;
    SET_GPR_U32(ctx, 31, 0x4007E0u);
    ctx->pc = 0x4007DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4007D8u;
    // 0x4007dc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x4007D8u, 0x4007E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4007E0u;
label_4007e0:
    // 0x4007e0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4007e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4007e4: 0x8e040158  lw          $a0, 0x158($s0)
    ctx->pc = 0x4007e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x4007e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4007e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4007ec: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x4007ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x4007f0: 0xae040120  sw          $a0, 0x120($s0)
    ctx->pc = 0x4007f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 4));
    // 0x4007f4: 0x8e02015c  lw          $v0, 0x15C($s0)
    ctx->pc = 0x4007f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x4007f8: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x4007f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x4007fc: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x4007fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_400800:
    // 0x400800: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x400800u;
    {
        const bool branch_taken_0x400800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x400804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400800u;
        // 0x400804: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400800) {
            ctx->pc = 0x4006F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4006f0;
        }
    }
    ctx->pc = 0x400808u;
    // 0x400808: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x400808u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40080c:
    // 0x40080c: 0x3c170060  lui         $s7, 0x60
    ctx->pc = 0x40080cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)96 << 16));
    // 0x400810: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x400810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400814: 0x0  nop
    ctx->pc = 0x400814u;
    // NOP
label_400818:
    // 0x400818: 0xc0f5d8e  jal         func_3D7638
    ctx->pc = 0x400818u;
    SET_GPR_U32(ctx, 31, 0x400820u);
    ctx->pc = 0x40081Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400818u;
    // 0x40081c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7638u, 0x400818u, 0x400820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400820u;
label_400820:
    // 0x400820: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x400820u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400824: 0x16800036  bnez        $s4, . + 4 + (0x36 << 2)
    ctx->pc = 0x400824u;
    {
        const bool branch_taken_0x400824 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x400824) {
            ctx->pc = 0x400900u;
            goto label_400900;
        }
    }
    ctx->pc = 0x40082Cu;
    // 0x40082c: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x40082cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x400830: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x400830u;
    {
        const bool branch_taken_0x400830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x400830) {
            ctx->pc = 0x40092Cu;
            goto label_40092c;
        }
    }
    ctx->pc = 0x400838u;
    // 0x400838: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x400838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x40083c: 0x8e53000c  lw          $s3, 0xC($s2)
    ctx->pc = 0x40083cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x400840: 0xb3102a  slt         $v0, $a1, $s3
    ctx->pc = 0x400840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x400844: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x400844u;
    {
        const bool branch_taken_0x400844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x400844) {
            ctx->pc = 0x400848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x400844u;
            // 0x400848: 0x9e05015c  lwu         $a1, 0x15C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4008B4u;
            goto label_4008b4;
        }
    }
    ctx->pc = 0x40084Cu;
    // 0x40084c: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x40084cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x400850: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x400850u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x400854: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x400854u;
    {
        const bool branch_taken_0x400854 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x400858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400854u;
        // 0x400858: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400854) {
            ctx->pc = 0x400898u;
            goto label_400898;
        }
    }
    ctx->pc = 0x40085Cu;
    // 0x40085c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x40085cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x400860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x400860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400864: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x400864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x400868: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x400868u;
    SET_GPR_U32(ctx, 31, 0x400870u);
    ctx->pc = 0x40086Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400868u;
    // 0x40086c: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x400868u, 0x400870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400870u;
label_400870:
    // 0x400870: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x400870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400874: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x400874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400878: 0x133080  sll         $a2, $s3, 2
    ctx->pc = 0x400878u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x40087c: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x40087Cu;
    SET_GPR_U32(ctx, 31, 0x400884u);
    ctx->pc = 0x400880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40087Cu;
    // 0x400880: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x40087Cu, 0x400884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400884u;
label_400884:
    // 0x400884: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x400884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400888: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x400888u;
    SET_GPR_U32(ctx, 31, 0x400890u);
    ctx->pc = 0x40088Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400888u;
    // 0x40088c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x400888u, 0x400890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400890u;
label_400890:
    // 0x400890: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x400890u;
    {
        const bool branch_taken_0x400890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x400894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400890u;
        // 0x400894: 0x9e05015c  lwu         $a1, 0x15C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400890) {
            ctx->pc = 0x4008B4u;
            goto label_4008b4;
        }
    }
    ctx->pc = 0x400898u;
label_400898:
    // 0x400898: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x400898u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x40089c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40089cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4008a0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x4008a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x4008a4: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x4008A4u;
    SET_GPR_U32(ctx, 31, 0x4008ACu);
    ctx->pc = 0x4008A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4008A4u;
    // 0x4008a8: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x4008A4u, 0x4008ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4008ACu;
label_4008ac:
    // 0x4008ac: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x4008acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x4008b0: 0x9e05015c  lwu         $a1, 0x15C($s0)
    ctx->pc = 0x4008b0u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 348)));
label_4008b4:
    // 0x4008b4: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x4008B4u;
    SET_GPR_U32(ctx, 31, 0x4008BCu);
    ctx->pc = 0x4008B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4008B4u;
    // 0x4008b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x4008B4u, 0x4008BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4008BCu;
label_4008bc:
    // 0x4008bc: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4008bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4008c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4008c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4008c4: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x4008c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4008c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4008c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4008cc: 0x8e050158  lw          $a1, 0x158($s0)
    ctx->pc = 0x4008ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x4008d0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4008d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4008d4: 0x8e06015c  lw          $a2, 0x15C($s0)
    ctx->pc = 0x4008d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x4008d8: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x4008D8u;
    SET_GPR_U32(ctx, 31, 0x4008E0u);
    ctx->pc = 0x4008DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4008D8u;
    // 0x4008dc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x4008D8u, 0x4008E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4008E0u;
label_4008e0:
    // 0x4008e0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4008e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4008e4: 0x8e040158  lw          $a0, 0x158($s0)
    ctx->pc = 0x4008e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x4008e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4008e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4008ec: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x4008ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x4008f0: 0xae040120  sw          $a0, 0x120($s0)
    ctx->pc = 0x4008f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 4));
    // 0x4008f4: 0x8e02015c  lw          $v0, 0x15C($s0)
    ctx->pc = 0x4008f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x4008f8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4008F8u;
    {
        const bool branch_taken_0x4008f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4008FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4008F8u;
        // 0x4008fc: 0xae020124  sw          $v0, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4008f8) {
            ctx->pc = 0x40092Cu;
            goto label_40092c;
        }
    }
    ctx->pc = 0x400900u;
label_400900:
    // 0x400900: 0x5295000d  beql        $s4, $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x400900u;
    {
        const bool branch_taken_0x400900 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 21));
        if (branch_taken_0x400900) {
            ctx->pc = 0x400904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x400900u;
            // 0x400904: 0x8e04015c  lw          $a0, 0x15C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x400938u;
            goto label_400938;
        }
    }
    ctx->pc = 0x400908u;
    // 0x400908: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x400908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x40090c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x40090Cu;
    {
        const bool branch_taken_0x40090c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x400910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40090Cu;
        // 0x400910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40090c) {
            ctx->pc = 0x400924u;
            goto label_400924;
        }
    }
    ctx->pc = 0x400914u;
    // 0x400914: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x400914u;
    SET_GPR_U32(ctx, 31, 0x40091Cu);
    ctx->pc = 0x400918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400914u;
    // 0x400918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x400914u, 0x40091Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40091Cu;
label_40091c:
    // 0x40091c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x40091Cu;
    {
        const bool branch_taken_0x40091c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40091c) {
            ctx->pc = 0x40092Cu;
            goto label_40092c;
        }
    }
    ctx->pc = 0x400924u;
label_400924:
    // 0x400924: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x400924u;
    SET_GPR_U32(ctx, 31, 0x40092Cu);
    ctx->pc = 0x400928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400924u;
    // 0x400928: 0x26e5fe10  addiu       $a1, $s7, -0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294966800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x400924u, 0x40092Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40092Cu;
label_40092c:
    // 0x40092c: 0x1695ffba  bne         $s4, $s5, . + 4 + (-0x46 << 2)
    ctx->pc = 0x40092Cu;
    {
        const bool branch_taken_0x40092c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 21));
        ctx->pc = 0x400930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40092Cu;
        // 0x400930: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40092c) {
            ctx->pc = 0x400818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_400818;
        }
    }
    ctx->pc = 0x400934u;
    // 0x400934: 0x8e04015c  lw          $a0, 0x15C($s0)
    ctx->pc = 0x400934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
label_400938:
    // 0x400938: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x400938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x40093c: 0x8e050124  lw          $a1, 0x124($s0)
    ctx->pc = 0x40093cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x400940: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x400940u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x400944: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x400944u;
    {
        const bool branch_taken_0x400944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x400948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400944u;
        // 0x400948: 0x838818  mult        $s1, $a0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x400944) {
            ctx->pc = 0x400954u;
            goto label_400954;
        }
    }
    ctx->pc = 0x40094Cu;
    // 0x40094c: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x40094cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x400950: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x400950u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_400954:
    // 0x400954: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x400954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_400958:
    // 0x400958: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x400958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x40095c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x40095cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x400960: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x400960u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x400964: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x400964u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x400968: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x400968u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x40096c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x40096cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x400970: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x400970u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x400974: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x400974u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x400978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x400978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40097c: 0x3e00008  jr          $ra
    ctx->pc = 0x40097Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x400980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40097Cu;
        // 0x400980: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40097Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x400984u;
    // 0x400984: 0x0  nop
    ctx->pc = 0x400984u;
    // NOP
    ctx->pc = 0x400988u;
}
