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

// Function: sub_00382698
// Address: 0x382698 - 0x382820
void sub_00382698_0x382698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00382698_0x382698");
#endif

    switch (ctx->pc) {
        case 0x382698u: goto label_382698;
        case 0x38269cu: goto label_38269c;
        case 0x3826a0u: goto label_3826a0;
        case 0x3826a4u: goto label_3826a4;
        case 0x3826a8u: goto label_3826a8;
        case 0x3826acu: goto label_3826ac;
        case 0x3826b0u: goto label_3826b0;
        case 0x3826b4u: goto label_3826b4;
        case 0x3826b8u: goto label_3826b8;
        case 0x3826bcu: goto label_3826bc;
        case 0x3826c0u: goto label_3826c0;
        case 0x3826c4u: goto label_3826c4;
        case 0x3826c8u: goto label_3826c8;
        case 0x3826ccu: goto label_3826cc;
        case 0x3826d0u: goto label_3826d0;
        case 0x3826d4u: goto label_3826d4;
        case 0x3826d8u: goto label_3826d8;
        case 0x3826dcu: goto label_3826dc;
        case 0x3826e0u: goto label_3826e0;
        case 0x3826e4u: goto label_3826e4;
        case 0x3826e8u: goto label_3826e8;
        case 0x3826ecu: goto label_3826ec;
        case 0x3826f0u: goto label_3826f0;
        case 0x3826f4u: goto label_3826f4;
        case 0x3826f8u: goto label_3826f8;
        case 0x3826fcu: goto label_3826fc;
        case 0x382700u: goto label_382700;
        case 0x382704u: goto label_382704;
        case 0x382708u: goto label_382708;
        case 0x38270cu: goto label_38270c;
        case 0x382710u: goto label_382710;
        case 0x382714u: goto label_382714;
        case 0x382718u: goto label_382718;
        case 0x38271cu: goto label_38271c;
        case 0x382720u: goto label_382720;
        case 0x382724u: goto label_382724;
        case 0x382728u: goto label_382728;
        case 0x38272cu: goto label_38272c;
        case 0x382730u: goto label_382730;
        case 0x382734u: goto label_382734;
        case 0x382738u: goto label_382738;
        case 0x38273cu: goto label_38273c;
        case 0x382740u: goto label_382740;
        case 0x382744u: goto label_382744;
        case 0x382748u: goto label_382748;
        case 0x38274cu: goto label_38274c;
        case 0x382750u: goto label_382750;
        case 0x382754u: goto label_382754;
        case 0x382758u: goto label_382758;
        case 0x38275cu: goto label_38275c;
        case 0x382760u: goto label_382760;
        case 0x382764u: goto label_382764;
        case 0x382768u: goto label_382768;
        case 0x38276cu: goto label_38276c;
        case 0x382770u: goto label_382770;
        case 0x382774u: goto label_382774;
        case 0x382778u: goto label_382778;
        case 0x38277cu: goto label_38277c;
        case 0x382780u: goto label_382780;
        case 0x382784u: goto label_382784;
        case 0x382788u: goto label_382788;
        case 0x38278cu: goto label_38278c;
        case 0x382790u: goto label_382790;
        case 0x382794u: goto label_382794;
        case 0x382798u: goto label_382798;
        case 0x38279cu: goto label_38279c;
        case 0x3827a0u: goto label_3827a0;
        case 0x3827a4u: goto label_3827a4;
        case 0x3827a8u: goto label_3827a8;
        case 0x3827acu: goto label_3827ac;
        case 0x3827b0u: goto label_3827b0;
        case 0x3827b4u: goto label_3827b4;
        case 0x3827b8u: goto label_3827b8;
        case 0x3827bcu: goto label_3827bc;
        case 0x3827c0u: goto label_3827c0;
        case 0x3827c4u: goto label_3827c4;
        case 0x3827c8u: goto label_3827c8;
        case 0x3827ccu: goto label_3827cc;
        case 0x3827d0u: goto label_3827d0;
        case 0x3827d4u: goto label_3827d4;
        case 0x3827d8u: goto label_3827d8;
        case 0x3827dcu: goto label_3827dc;
        case 0x3827e0u: goto label_3827e0;
        case 0x3827e4u: goto label_3827e4;
        case 0x3827e8u: goto label_3827e8;
        case 0x3827ecu: goto label_3827ec;
        case 0x3827f0u: goto label_3827f0;
        case 0x3827f4u: goto label_3827f4;
        case 0x3827f8u: goto label_3827f8;
        case 0x3827fcu: goto label_3827fc;
        case 0x382800u: goto label_382800;
        case 0x382804u: goto label_382804;
        case 0x382808u: goto label_382808;
        case 0x38280cu: goto label_38280c;
        case 0x382810u: goto label_382810;
        case 0x382814u: goto label_382814;
        case 0x382818u: goto label_382818;
        case 0x38281cu: goto label_38281c;
        default: break;
    }

    ctx->pc = 0x382698u;

label_382698:
    // 0x382698: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x382698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_38269c:
    // 0x38269c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x38269cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_3826a0:
    // 0x3826a0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3826a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_3826a4:
    // 0x3826a4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3826a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3826a8:
    // 0x3826a8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3826a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3826ac:
    // 0x3826ac: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3826acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3826b0:
    // 0x3826b0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3826b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3826b4:
    // 0x3826b4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3826b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3826b8:
    // 0x3826b8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3826b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3826bc:
    // 0x3826bc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3826bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3826c0:
    // 0x3826c0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3826c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_3826c4:
    // 0x3826c4: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3826c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_3826c8:
    // 0x3826c8: 0x12c00047  beqz        $s6, . + 4 + (0x47 << 2)
label_3826cc:
    if (ctx->pc == 0x3826CCu) {
        ctx->pc = 0x3826CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3826C8u;
        // 0x3826cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3826D0u;
        goto label_3826d0;
    }
    ctx->pc = 0x3826C8u;
    {
        const bool branch_taken_0x3826c8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3826CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3826C8u;
        // 0x3826cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3826c8) {
            ctx->pc = 0x3827E8u;
            goto label_3827e8;
        }
    }
    ctx->pc = 0x3826D0u;
label_3826d0:
    // 0x3826d0: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x3826d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3826d4:
    // 0x3826d4: 0x18c00044  blez        $a2, . + 4 + (0x44 << 2)
label_3826d8:
    if (ctx->pc == 0x3826D8u) {
        ctx->pc = 0x3826D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3826D4u;
        // 0x3826d8: 0x241e0003  addiu       $fp, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3826DCu;
        goto label_3826dc;
    }
    ctx->pc = 0x3826D4u;
    {
        const bool branch_taken_0x3826d4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x3826D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3826D4u;
        // 0x3826d8: 0x241e0003  addiu       $fp, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3826d4) {
            ctx->pc = 0x3827E8u;
            goto label_3827e8;
        }
    }
    ctx->pc = 0x3826DCu;
label_3826dc:
    // 0x3826dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3826dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3826e0:
    // 0x3826e0: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x3826e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_3826e4:
    // 0x3826e4: 0x0  nop
    ctx->pc = 0x3826e4u;
    // NOP
label_3826e8:
    // 0x3826e8: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x3826e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3826ec:
    // 0x3826ec: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x3826ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3826f0:
    // 0x3826f0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3826f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3826f4:
    // 0x3826f4: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_3826f8:
    if (ctx->pc == 0x3826F8u) {
        ctx->pc = 0x3826F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3826F4u;
        // 0x3826f8: 0x24b70001  addiu       $s7, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3826FCu;
        goto label_3826fc;
    }
    ctx->pc = 0x3826F4u;
    {
        const bool branch_taken_0x3826f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3826F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3826F4u;
        // 0x3826f8: 0x24b70001  addiu       $s7, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3826f4) {
            ctx->pc = 0x3827CCu;
            goto label_3827cc;
        }
    }
    ctx->pc = 0x3826FCu;
label_3826fc:
    // 0x3826fc: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
label_382700:
    if (ctx->pc == 0x382700u) {
        ctx->pc = 0x382700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3826FCu;
        // 0x382700: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382704u;
        goto label_382704;
    }
    ctx->pc = 0x3826FCu;
    {
        const bool branch_taken_0x3826fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x382700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3826FCu;
        // 0x382700: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3826fc) {
            ctx->pc = 0x3827C4u;
            goto label_3827c4;
        }
    }
    ctx->pc = 0x382704u;
label_382704:
    // 0x382704: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x382704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_382708:
    // 0x382708: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_38270c:
    if (ctx->pc == 0x38270Cu) {
        ctx->pc = 0x38270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382708u;
        // 0x38270c: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382710u;
        goto label_382710;
    }
    ctx->pc = 0x382708u;
    {
        const bool branch_taken_0x382708 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382708u;
        // 0x38270c: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382708) {
            ctx->pc = 0x382728u;
            goto label_382728;
        }
    }
    ctx->pc = 0x382710u;
label_382710:
    // 0x382710: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x382710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_382714:
    // 0x382714: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x382714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_382718:
    // 0x382718: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x382718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_38271c:
    // 0x38271c: 0x40f809  jalr        $v0
label_382720:
    if (ctx->pc == 0x382720u) {
        ctx->pc = 0x382724u;
        goto label_382724;
    }
    ctx->pc = 0x38271Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x382724u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38271Cu, 0x382724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x382724u;
label_382724:
    // 0x382724: 0x24520005  addiu       $s2, $v0, 0x5
    ctx->pc = 0x382724u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_382728:
    // 0x382728: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x382728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_38272c:
    // 0x38272c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38272cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_382730:
    // 0x382730: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_382734:
    if (ctx->pc == 0x382734u) {
        ctx->pc = 0x382734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382730u;
        // 0x382734: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382738u;
        goto label_382738;
    }
    ctx->pc = 0x382730u;
    {
        const bool branch_taken_0x382730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x382734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382730u;
        // 0x382734: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382730) {
            ctx->pc = 0x382764u;
            goto label_382764;
        }
    }
    ctx->pc = 0x382738u;
label_382738:
    // 0x382738: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x382738u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_38273c:
    // 0x38273c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_382740:
    if (ctx->pc == 0x382740u) {
        ctx->pc = 0x382740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38273Cu;
        // 0x382740: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382744u;
        goto label_382744;
    }
    ctx->pc = 0x38273Cu;
    {
        const bool branch_taken_0x38273c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38273Cu;
        // 0x382740: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38273c) {
            ctx->pc = 0x382754u;
            goto label_382754;
        }
    }
    ctx->pc = 0x382744u;
label_382744:
    // 0x382744: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_382748:
    if (ctx->pc == 0x382748u) {
        ctx->pc = 0x382748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382744u;
        // 0x382748: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38274Cu;
        goto label_38274c;
    }
    ctx->pc = 0x382744u;
    {
        const bool branch_taken_0x382744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x382744) {
            ctx->pc = 0x382748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x382744u;
            // 0x382748: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382768u;
            goto label_382768;
        }
    }
    ctx->pc = 0x38274Cu;
label_38274c:
    // 0x38274c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_382750:
    if (ctx->pc == 0x382750u) {
        ctx->pc = 0x382750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38274Cu;
        // 0x382750: 0x8ec60000  lw          $a2, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382754u;
        goto label_382754;
    }
    ctx->pc = 0x38274Cu;
    {
        const bool branch_taken_0x38274c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38274Cu;
        // 0x382750: 0x8ec60000  lw          $a2, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38274c) {
            ctx->pc = 0x3827C8u;
            goto label_3827c8;
        }
    }
    ctx->pc = 0x382754u;
label_382754:
    // 0x382754: 0x507e0007  beql        $v1, $fp, . + 4 + (0x7 << 2)
label_382758:
    if (ctx->pc == 0x382758u) {
        ctx->pc = 0x382758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382754u;
        // 0x382758: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38275Cu;
        goto label_38275c;
    }
    ctx->pc = 0x382754u;
    {
        const bool branch_taken_0x382754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 30));
        if (branch_taken_0x382754) {
            ctx->pc = 0x382758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x382754u;
            // 0x382758: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382774u;
            goto label_382774;
        }
    }
    ctx->pc = 0x38275Cu;
label_38275c:
    // 0x38275c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_382760:
    if (ctx->pc == 0x382760u) {
        ctx->pc = 0x382760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38275Cu;
        // 0x382760: 0x8ec60000  lw          $a2, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382764u;
        goto label_382764;
    }
    ctx->pc = 0x38275Cu;
    {
        const bool branch_taken_0x38275c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38275Cu;
        // 0x382760: 0x8ec60000  lw          $a2, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38275c) {
            ctx->pc = 0x3827C8u;
            goto label_3827c8;
        }
    }
    ctx->pc = 0x382764u;
label_382764:
    // 0x382764: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x382764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_382768:
    // 0x382768: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x382768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_38276c:
    // 0x38276c: 0x10000015  b           . + 4 + (0x15 << 2)
label_382770:
    if (ctx->pc == 0x382770u) {
        ctx->pc = 0x382770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38276Cu;
        // 0x382770: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382774u;
        goto label_382774;
    }
    ctx->pc = 0x38276Cu;
    {
        const bool branch_taken_0x38276c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38276Cu;
        // 0x382770: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38276c) {
            ctx->pc = 0x3827C4u;
            goto label_3827c4;
        }
    }
    ctx->pc = 0x382774u;
label_382774:
    // 0x382774: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x382774u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_382778:
    // 0x382778: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
label_38277c:
    if (ctx->pc == 0x38277Cu) {
        ctx->pc = 0x38277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382778u;
        // 0x38277c: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382780u;
        goto label_382780;
    }
    ctx->pc = 0x382778u;
    {
        const bool branch_taken_0x382778 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x38277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382778u;
        // 0x38277c: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382778) {
            ctx->pc = 0x3827C4u;
            goto label_3827c4;
        }
    }
    ctx->pc = 0x382780u;
label_382780:
    // 0x382780: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x382780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_382784:
    // 0x382784: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x382784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_382788:
    // 0x382788: 0x2474e880  addiu       $s4, $v1, -0x1780
    ctx->pc = 0x382788u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_38278c:
    // 0x38278c: 0x0  nop
    ctx->pc = 0x38278cu;
    // NOP
label_382790:
    // 0x382790: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x382790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_382794:
    // 0x382794: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_382798:
    if (ctx->pc == 0x382798u) {
        ctx->pc = 0x382798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382794u;
        // 0x382798: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38279Cu;
        goto label_38279c;
    }
    ctx->pc = 0x382794u;
    {
        const bool branch_taken_0x382794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x382798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382794u;
        // 0x382798: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382794) {
            ctx->pc = 0x3827B0u;
            goto label_3827b0;
        }
    }
    ctx->pc = 0x38279Cu;
label_38279c:
    // 0x38279c: 0x8e8200f4  lw          $v0, 0xF4($s4)
    ctx->pc = 0x38279cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 244)));
label_3827a0:
    // 0x3827a0: 0x40f809  jalr        $v0
label_3827a4:
    if (ctx->pc == 0x3827A4u) {
        ctx->pc = 0x3827A8u;
        goto label_3827a8;
    }
    ctx->pc = 0x3827A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3827A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3827A0u, 0x3827A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3827A8u;
label_3827a8:
    // 0x3827a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3827a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3827ac:
    // 0x3827ac: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x3827acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3827b0:
    // 0x3827b0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3827b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3827b4:
    // 0x3827b4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3827b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3827b8:
    // 0x3827b8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x3827b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3827bc:
    // 0x3827bc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_3827c0:
    if (ctx->pc == 0x3827C0u) {
        ctx->pc = 0x3827C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3827BCu;
        // 0x3827c0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3827C4u;
        goto label_3827c4;
    }
    ctx->pc = 0x3827BCu;
    {
        const bool branch_taken_0x3827bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3827C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3827BCu;
        // 0x3827c0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3827bc) {
            ctx->pc = 0x382790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382790;
        }
    }
    ctx->pc = 0x3827C4u;
label_3827c4:
    // 0x3827c4: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x3827c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3827c8:
    // 0x3827c8: 0x2b2a821  addu        $s5, $s5, $s2
    ctx->pc = 0x3827c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_3827cc:
    // 0x3827cc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3827ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3827d0:
    // 0x3827d0: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x3827d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_3827d4:
    // 0x3827d4: 0x5440ffc4  bnel        $v0, $zero, . + 4 + (-0x3C << 2)
label_3827d8:
    if (ctx->pc == 0x3827D8u) {
        ctx->pc = 0x3827D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3827D4u;
        // 0x3827d8: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3827DCu;
        goto label_3827dc;
    }
    ctx->pc = 0x3827D4u;
    {
        const bool branch_taken_0x3827d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3827d4) {
            ctx->pc = 0x3827D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3827D4u;
            // 0x3827d8: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3826E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3826e8;
        }
    }
    ctx->pc = 0x3827DCu;
label_3827dc:
    // 0x3827dc: 0x26a30004  addiu       $v1, $s5, 0x4
    ctx->pc = 0x3827dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_3827e0:
    // 0x3827e0: 0x2aa20001  slti        $v0, $s5, 0x1
    ctx->pc = 0x3827e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)1) ? 1 : 0);
label_3827e4:
    // 0x3827e4: 0x62a80a  movz        $s5, $v1, $v0
    ctx->pc = 0x3827e4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
label_3827e8:
    // 0x3827e8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3827e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3827ec:
    // 0x3827ec: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3827ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3827f0:
    // 0x3827f0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3827f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3827f4:
    // 0x3827f4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3827f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3827f8:
    // 0x3827f8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3827f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3827fc:
    // 0x3827fc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3827fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_382800:
    // 0x382800: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x382800u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_382804:
    // 0x382804: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x382804u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_382808:
    // 0x382808: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x382808u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38280c:
    // 0x38280c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x38280cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_382810:
    // 0x382810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x382810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_382814:
    // 0x382814: 0x3e00008  jr          $ra
label_382818:
    if (ctx->pc == 0x382818u) {
        ctx->pc = 0x382818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382814u;
        // 0x382818: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38281Cu;
        goto label_38281c;
    }
    ctx->pc = 0x382814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382814u;
        // 0x382818: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38281Cu;
label_38281c:
    // 0x38281c: 0x0  nop
    ctx->pc = 0x38281cu;
    // NOP
    ctx->pc = 0x382820u;
}
