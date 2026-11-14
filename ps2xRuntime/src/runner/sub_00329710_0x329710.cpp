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

// Function: sub_00329710
// Address: 0x329710 - 0x329ab8
void sub_00329710_0x329710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329710_0x329710");
#endif

    switch (ctx->pc) {
        case 0x329754u: goto label_329754;
        case 0x329784u: goto label_329784;
        case 0x3297b4u: goto label_3297b4;
        case 0x3297dcu: goto label_3297dc;
        case 0x329804u: goto label_329804;
        case 0x32982cu: goto label_32982c;
        case 0x329854u: goto label_329854;
        case 0x32986cu: goto label_32986c;
        case 0x329914u: goto label_329914;
        case 0x329950u: goto label_329950;
        case 0x329960u: goto label_329960;
        case 0x329978u: goto label_329978;
        case 0x329984u: goto label_329984;
        case 0x3299a8u: goto label_3299a8;
        case 0x329a40u: goto label_329a40;
        case 0x329a64u: goto label_329a64;
        case 0x329a84u: goto label_329a84;
        case 0x329a94u: goto label_329a94;
        default: break;
    }

    ctx->pc = 0x329710u;

label_329710:
    // 0x329710: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x329710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x329714: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x329714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x329718: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x329718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x32971c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x32971cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x329720: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x329720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329724: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x329724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x329728: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x329728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32972c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32972cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x329730: 0x2625002c  addiu       $a1, $s1, 0x2C
    ctx->pc = 0x329730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x329734: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x329734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x329738: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x329738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x32973c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32973cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x329740: 0x8e33003c  lw          $s3, 0x3C($s1)
    ctx->pc = 0x329740u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x329744: 0x8e320030  lw          $s2, 0x30($s1)
    ctx->pc = 0x329744u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x329748: 0x8e340038  lw          $s4, 0x38($s1)
    ctx->pc = 0x329748u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x32974c: 0xc103440  jal         func_40D100
    ctx->pc = 0x32974Cu;
    SET_GPR_U32(ctx, 31, 0x329754u);
    ctx->pc = 0x329750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32974Cu;
    // 0x329750: 0x8e350034  lw          $s5, 0x34($s1) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x32974Cu, 0x329754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329754u;
label_329754:
    // 0x329754: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329758: 0x12000045  beqz        $s0, . + 4 + (0x45 << 2)
    ctx->pc = 0x329758u;
    {
        const bool branch_taken_0x329758 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329758u;
        // 0x32975c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329758) {
            ctx->pc = 0x329870u;
            goto label_329870;
        }
    }
    ctx->pc = 0x329760u;
    // 0x329760: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x329760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x329764: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x329764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x329768: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x329768u;
    {
        const bool branch_taken_0x329768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329768u;
        // 0x32976c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329768) {
            ctx->pc = 0x329790u;
            goto label_329790;
        }
    }
    ctx->pc = 0x329770u;
    // 0x329770: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x329770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x329774: 0x2460018  mult        $zero, $s2, $a2
    ctx->pc = 0x329774u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x329778: 0x3012  mflo        $a2
    ctx->pc = 0x329778u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x32977c: 0xc10341a  jal         func_40D068
    ctx->pc = 0x32977Cu;
    SET_GPR_U32(ctx, 31, 0x329784u);
    ctx->pc = 0x329780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32977Cu;
    // 0x329780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x32977Cu, 0x329784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329784u;
label_329784:
    // 0x329784: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329788: 0x12000039  beqz        $s0, . + 4 + (0x39 << 2)
    ctx->pc = 0x329788u;
    {
        const bool branch_taken_0x329788 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329788u;
        // 0x32978c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329788) {
            ctx->pc = 0x329870u;
            goto label_329870;
        }
    }
    ctx->pc = 0x329790u;
label_329790:
    // 0x329790: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x329790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x329794: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x329794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x329798: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x329798u;
    {
        const bool branch_taken_0x329798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329798u;
        // 0x32979c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329798) {
            ctx->pc = 0x3297C0u;
            goto label_3297c0;
        }
    }
    ctx->pc = 0x3297A0u;
    // 0x3297a0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3297a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3297a4: 0x2460018  mult        $zero, $s2, $a2
    ctx->pc = 0x3297a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3297a8: 0x3012  mflo        $a2
    ctx->pc = 0x3297a8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3297ac: 0xc10341a  jal         func_40D068
    ctx->pc = 0x3297ACu;
    SET_GPR_U32(ctx, 31, 0x3297B4u);
    ctx->pc = 0x3297B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3297ACu;
    // 0x3297b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x3297ACu, 0x3297B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3297B4u;
label_3297b4:
    // 0x3297b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3297b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3297b8: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x3297B8u;
    {
        const bool branch_taken_0x3297b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3297BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3297B8u;
        // 0x3297bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3297b8) {
            ctx->pc = 0x329870u;
            goto label_329870;
        }
    }
    ctx->pc = 0x3297C0u;
label_3297c0:
    // 0x3297c0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x3297c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x3297c4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3297c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3297c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3297C8u;
    {
        const bool branch_taken_0x3297c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3297CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3297C8u;
        // 0x3297cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3297c8) {
            ctx->pc = 0x3297E8u;
            goto label_3297e8;
        }
    }
    ctx->pc = 0x3297D0u;
    // 0x3297d0: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x3297d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3297d4: 0xc10341a  jal         func_40D068
    ctx->pc = 0x3297D4u;
    SET_GPR_U32(ctx, 31, 0x3297DCu);
    ctx->pc = 0x3297D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3297D4u;
    // 0x3297d8: 0x123080  sll         $a2, $s2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x3297D4u, 0x3297DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3297DCu;
label_3297dc:
    // 0x3297dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3297dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3297e0: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3297E0u;
    {
        const bool branch_taken_0x3297e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3297E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3297E0u;
        // 0x3297e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3297e0) {
            ctx->pc = 0x329870u;
            goto label_329870;
        }
    }
    ctx->pc = 0x3297E8u;
label_3297e8:
    // 0x3297e8: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3297E8u;
    {
        const bool branch_taken_0x3297e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3297ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3297E8u;
        // 0x3297ec: 0x1230c0  sll         $a2, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3297e8) {
            ctx->pc = 0x329810u;
            goto label_329810;
        }
    }
    ctx->pc = 0x3297F0u;
    // 0x3297f0: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x3297f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3297f4: 0x2660018  mult        $zero, $s3, $a2
    ctx->pc = 0x3297f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3297f8: 0x3012  mflo        $a2
    ctx->pc = 0x3297f8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3297fc: 0xc10341a  jal         func_40D068
    ctx->pc = 0x3297FCu;
    SET_GPR_U32(ctx, 31, 0x329804u);
    ctx->pc = 0x329800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3297FCu;
    // 0x329800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x3297FCu, 0x329804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329804u;
label_329804:
    // 0x329804: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329808: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x329808u;
    {
        const bool branch_taken_0x329808 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329808u;
        // 0x32980c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329808) {
            ctx->pc = 0x329870u;
            goto label_329870;
        }
    }
    ctx->pc = 0x329810u;
label_329810:
    // 0x329810: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x329810u;
    {
        const bool branch_taken_0x329810 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x329814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329810u;
        // 0x329814: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329810) {
            ctx->pc = 0x329838u;
            goto label_329838;
        }
    }
    ctx->pc = 0x329818u;
    // 0x329818: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x329818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x32981c: 0x2860018  mult        $zero, $s4, $a2
    ctx->pc = 0x32981cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x329820: 0x3012  mflo        $a2
    ctx->pc = 0x329820u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x329824: 0xc103440  jal         func_40D100
    ctx->pc = 0x329824u;
    SET_GPR_U32(ctx, 31, 0x32982Cu);
    ctx->pc = 0x329828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329824u;
    // 0x329828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x329824u, 0x32982Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32982Cu;
label_32982c:
    // 0x32982c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32982cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329830: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x329830u;
    {
        const bool branch_taken_0x329830 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x329834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329830u;
        // 0x329834: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329830) {
            ctx->pc = 0x329870u;
            goto label_329870;
        }
    }
    ctx->pc = 0x329838u;
label_329838:
    // 0x329838: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x329838u;
    {
        const bool branch_taken_0x329838 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x32983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329838u;
        // 0x32983c: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329838) {
            ctx->pc = 0x329860u;
            goto label_329860;
        }
    }
    ctx->pc = 0x329840u;
    // 0x329840: 0x8e25005c  lw          $a1, 0x5C($s1)
    ctx->pc = 0x329840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x329844: 0x2a60018  mult        $zero, $s5, $a2
    ctx->pc = 0x329844u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x329848: 0x3012  mflo        $a2
    ctx->pc = 0x329848u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x32984c: 0xc103440  jal         func_40D100
    ctx->pc = 0x32984Cu;
    SET_GPR_U32(ctx, 31, 0x329854u);
    ctx->pc = 0x329850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32984Cu;
    // 0x329850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x32984Cu, 0x329854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329854u;
label_329854:
    // 0x329854: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329858: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x329858u;
    {
        const bool branch_taken_0x329858 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329858u;
        // 0x32985c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329858) {
            ctx->pc = 0x329870u;
            goto label_329870;
        }
    }
    ctx->pc = 0x329860u;
label_329860:
    // 0x329860: 0x26240048  addiu       $a0, $s1, 0x48
    ctx->pc = 0x329860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x329864: 0xc0e3b5e  jal         func_38ED78
    ctx->pc = 0x329864u;
    SET_GPR_U32(ctx, 31, 0x32986Cu);
    ctx->pc = 0x329868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329864u;
    // 0x329868: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38ED78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38ED78u, 0x329864u, 0x32986Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32986Cu;
label_32986c:
    // 0x32986c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32986cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_329870:
    // 0x329870: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x329870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x329874: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x329874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x329878: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x329878u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32987c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32987cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x329880: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x329880u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x329884: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x329884u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32988c: 0x3e00008  jr          $ra
    ctx->pc = 0x32988Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32988Cu;
        // 0x329890: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32988Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329894u;
    // 0x329894: 0x0  nop
    ctx->pc = 0x329894u;
    // NOP
    // 0x329898: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32989c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x32989cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3298a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3298a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3298a4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3298a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3298a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3298a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3298ac: 0x8ce2002c  lw          $v0, 0x2C($a3)
    ctx->pc = 0x3298acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x3298b0: 0x90e4002e  lbu         $a0, 0x2E($a3)
    ctx->pc = 0x3298b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 46)));
    // 0x3298b4: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x3298b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3298b8: 0x30460004  andi        $a2, $v0, 0x4
    ctx->pc = 0x3298b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3298bc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x3298bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3298c0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3298c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3298c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3298C4u;
    {
        const bool branch_taken_0x3298c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3298C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3298C4u;
        // 0x3298c8: 0x651818  mult        $v1, $v1, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3298c4) {
            ctx->pc = 0x3298D8u;
            goto label_3298d8;
        }
    }
    ctx->pc = 0x3298CCu;
    // 0x3298cc: 0x24c2000c  addiu       $v0, $a2, 0xC
    ctx->pc = 0x3298ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x3298d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3298D0u;
    {
        const bool branch_taken_0x3298d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3298D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3298D0u;
        // 0x3298d4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3298d0) {
            ctx->pc = 0x3298DCu;
            goto label_3298dc;
        }
    }
    ctx->pc = 0x3298D8u;
label_3298d8:
    // 0x3298d8: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x3298d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3298dc:
    // 0x3298dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3298dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3298e0: 0x8ce50030  lw          $a1, 0x30($a3)
    ctx->pc = 0x3298e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x3298e4: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x3298e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x3298e8: 0x8ce30038  lw          $v1, 0x38($a3)
    ctx->pc = 0x3298e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x3298ec: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x3298ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x3298f0: 0x452818  mult        $a1, $v0, $a1
    ctx->pc = 0x3298f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3298f4: 0x8ce20034  lw          $v0, 0x34($a3)
    ctx->pc = 0x3298f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x3298f8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x3298f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3298fc: 0x24e40048  addiu       $a0, $a3, 0x48
    ctx->pc = 0x3298fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 72));
    // 0x329900: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x329900u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x329904: 0x24b00014  addiu       $s0, $a1, 0x14
    ctx->pc = 0x329904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x329908: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x329908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32990c: 0xc0e3e3a  jal         func_38F8E8
    ctx->pc = 0x32990Cu;
    SET_GPR_U32(ctx, 31, 0x329914u);
    ctx->pc = 0x329910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32990Cu;
    // 0x329910: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F8E8u, 0x32990Cu, 0x329914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329914u;
label_329914:
    // 0x329914: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x329914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x329918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32991c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x32991cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x329920: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x329920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x329924: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x329924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329928: 0x3e00008  jr          $ra
    ctx->pc = 0x329928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329928u;
        // 0x32992c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329930u;
    // 0x329930: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x329930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x329934: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x329934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329938: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x329938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x32993c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x32993cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x329940: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x329940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329944: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x329944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x329948: 0xc103322  jal         func_40CC88
    ctx->pc = 0x329948u;
    SET_GPR_U32(ctx, 31, 0x329950u);
    ctx->pc = 0x32994Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329948u;
    // 0x32994c: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x329948u, 0x329950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329950u;
label_329950:
    // 0x329950: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x329950u;
    {
        const bool branch_taken_0x329950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329950u;
        // 0x329954: 0x24020123  addiu       $v0, $zero, 0x123 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329950) {
            ctx->pc = 0x329968u;
            goto label_329968;
        }
    }
    ctx->pc = 0x329958u;
    // 0x329958: 0xc0ca558  jal         func_329560
    ctx->pc = 0x329958u;
    SET_GPR_U32(ctx, 31, 0x329960u);
    ctx->pc = 0x32995Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329958u;
    // 0x32995c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329560u, 0x329958u, 0x329960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329960u;
label_329960:
    // 0x329960: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x329960u;
    {
        const bool branch_taken_0x329960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329960u;
        // 0x329964: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329960) {
            ctx->pc = 0x32998Cu;
            goto label_32998c;
        }
    }
    ctx->pc = 0x329968u;
label_329968:
    // 0x329968: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x329968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x32996c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x32996cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x329970: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x329970u;
    SET_GPR_U32(ctx, 31, 0x329978u);
    ctx->pc = 0x329974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329970u;
    // 0x329974: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x329970u, 0x329978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329978u;
label_329978:
    // 0x329978: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x329978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32997c: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x32997Cu;
    SET_GPR_U32(ctx, 31, 0x329984u);
    ctx->pc = 0x329980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32997Cu;
    // 0x329980: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x32997Cu, 0x329984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329984u;
label_329984:
    // 0x329984: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x329984u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329988: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x329988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32998c:
    // 0x32998c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32998cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x329990: 0x3e00008  jr          $ra
    ctx->pc = 0x329990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329990u;
        // 0x329994: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329998u;
    // 0x329998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x329998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32999c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32999cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3299a0: 0xc0ca558  jal         func_329560
    ctx->pc = 0x3299A0u;
    SET_GPR_U32(ctx, 31, 0x3299A8u);
    ctx->pc = 0x329560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329560u, 0x3299A0u, 0x3299A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3299A8u;
label_3299a8:
    // 0x3299a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3299a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3299ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3299ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3299B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3299ACu;
        // 0x3299b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3299ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3299B4u;
    // 0x3299b4: 0x0  nop
    ctx->pc = 0x3299b4u;
    // NOP
    // 0x3299b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3299b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3299bc: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x3299bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3299c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3299c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3299c4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3299c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3299c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3299c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3299cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3299ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3299d0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3299d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3299d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3299d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3299d8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x3299d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x3299dc: 0x9224002e  lbu         $a0, 0x2E($s1)
    ctx->pc = 0x3299dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
    // 0x3299e0: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x3299e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3299e4: 0x30470004  andi        $a3, $v0, 0x4
    ctx->pc = 0x3299e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3299e8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x3299e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3299ec: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3299ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3299f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3299F0u;
    {
        const bool branch_taken_0x3299f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3299F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3299F0u;
        // 0x3299f4: 0x661818  mult        $v1, $v1, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3299f0) {
            ctx->pc = 0x329A04u;
            goto label_329a04;
        }
    }
    ctx->pc = 0x3299F8u;
    // 0x3299f8: 0x24e2000c  addiu       $v0, $a3, 0xC
    ctx->pc = 0x3299f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x3299fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3299FCu;
    {
        const bool branch_taken_0x3299fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3299FCu;
        // 0x329a00: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3299fc) {
            ctx->pc = 0x329A08u;
            goto label_329a08;
        }
    }
    ctx->pc = 0x329A04u;
label_329a04:
    // 0x329a04: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x329a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_329a08:
    // 0x329a08: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x329a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x329a0c: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x329a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x329a10: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x329a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x329a14: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x329a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x329a18: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x329a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x329a1c: 0x452818  mult        $a1, $v0, $a1
    ctx->pc = 0x329a1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x329a20: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x329a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x329a24: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x329a24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x329a28: 0x26240048  addiu       $a0, $s1, 0x48
    ctx->pc = 0x329a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x329a2c: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x329a2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x329a30: 0x24b00014  addiu       $s0, $a1, 0x14
    ctx->pc = 0x329a30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x329a34: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x329a34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x329a38: 0xc0e3e3a  jal         func_38F8E8
    ctx->pc = 0x329A38u;
    SET_GPR_U32(ctx, 31, 0x329A40u);
    ctx->pc = 0x329A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329A38u;
    // 0x329a3c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F8E8u, 0x329A38u, 0x329A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329A40u;
label_329a40:
    // 0x329a40: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x329a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x329a44: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x329a44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x329a48: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x329a48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x329a4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x329a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329a50: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x329a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x329a54: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x329a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x329a58: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x329a58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x329a5c: 0xc103404  jal         func_40D010
    ctx->pc = 0x329A5Cu;
    SET_GPR_U32(ctx, 31, 0x329A64u);
    ctx->pc = 0x329A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329A5Cu;
    // 0x329a60: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x329A5Cu, 0x329A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329A64u;
label_329a64:
    // 0x329a64: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x329A64u;
    {
        const bool branch_taken_0x329a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A64u;
        // 0x329a68: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329a64) {
            ctx->pc = 0x329A9Cu;
            goto label_329a9c;
        }
    }
    ctx->pc = 0x329A6Cu;
    // 0x329a6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x329a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329a70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x329a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329a74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x329a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329a78: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x329a78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x329a7c: 0xc103404  jal         func_40D010
    ctx->pc = 0x329A7Cu;
    SET_GPR_U32(ctx, 31, 0x329A84u);
    ctx->pc = 0x329A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329A7Cu;
    // 0x329a80: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x329A7Cu, 0x329A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329A84u;
label_329a84:
    // 0x329a84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x329A84u;
    {
        const bool branch_taken_0x329a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A84u;
        // 0x329a88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329a84) {
            ctx->pc = 0x329A9Cu;
            goto label_329a9c;
        }
    }
    ctx->pc = 0x329A8Cu;
    // 0x329a8c: 0xc0ca5c4  jal         func_329710
    ctx->pc = 0x329A8Cu;
    SET_GPR_U32(ctx, 31, 0x329A94u);
    ctx->pc = 0x329A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329A8Cu;
    // 0x329a90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329710u;
    goto label_329710;
    ctx->pc = 0x329A94u;
label_329a94:
    // 0x329a94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x329A94u;
    {
        const bool branch_taken_0x329a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A94u;
        // 0x329a98: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329a94) {
            ctx->pc = 0x329AA0u;
            goto label_329aa0;
        }
    }
    ctx->pc = 0x329A9Cu;
label_329a9c:
    // 0x329a9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x329a9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_329aa0:
    // 0x329aa0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x329aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x329aa4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x329aa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x329aa8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x329aa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329aac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x329AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329AB0u;
        // 0x329ab4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329AB8u;
}
