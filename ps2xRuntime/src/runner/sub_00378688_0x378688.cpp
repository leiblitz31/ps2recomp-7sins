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

// Function: sub_00378688
// Address: 0x378688 - 0x378810
void sub_00378688_0x378688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378688_0x378688");
#endif

    switch (ctx->pc) {
        case 0x378688u: goto label_378688;
        case 0x37868cu: goto label_37868c;
        case 0x378690u: goto label_378690;
        case 0x378694u: goto label_378694;
        case 0x378698u: goto label_378698;
        case 0x37869cu: goto label_37869c;
        case 0x3786a0u: goto label_3786a0;
        case 0x3786a4u: goto label_3786a4;
        case 0x3786a8u: goto label_3786a8;
        case 0x3786acu: goto label_3786ac;
        case 0x3786b0u: goto label_3786b0;
        case 0x3786b4u: goto label_3786b4;
        case 0x3786b8u: goto label_3786b8;
        case 0x3786bcu: goto label_3786bc;
        case 0x3786c0u: goto label_3786c0;
        case 0x3786c4u: goto label_3786c4;
        case 0x3786c8u: goto label_3786c8;
        case 0x3786ccu: goto label_3786cc;
        case 0x3786d0u: goto label_3786d0;
        case 0x3786d4u: goto label_3786d4;
        case 0x3786d8u: goto label_3786d8;
        case 0x3786dcu: goto label_3786dc;
        case 0x3786e0u: goto label_3786e0;
        case 0x3786e4u: goto label_3786e4;
        case 0x3786e8u: goto label_3786e8;
        case 0x3786ecu: goto label_3786ec;
        case 0x3786f0u: goto label_3786f0;
        case 0x3786f4u: goto label_3786f4;
        case 0x3786f8u: goto label_3786f8;
        case 0x3786fcu: goto label_3786fc;
        case 0x378700u: goto label_378700;
        case 0x378704u: goto label_378704;
        case 0x378708u: goto label_378708;
        case 0x37870cu: goto label_37870c;
        case 0x378710u: goto label_378710;
        case 0x378714u: goto label_378714;
        case 0x378718u: goto label_378718;
        case 0x37871cu: goto label_37871c;
        case 0x378720u: goto label_378720;
        case 0x378724u: goto label_378724;
        case 0x378728u: goto label_378728;
        case 0x37872cu: goto label_37872c;
        case 0x378730u: goto label_378730;
        case 0x378734u: goto label_378734;
        case 0x378738u: goto label_378738;
        case 0x37873cu: goto label_37873c;
        case 0x378740u: goto label_378740;
        case 0x378744u: goto label_378744;
        case 0x378748u: goto label_378748;
        case 0x37874cu: goto label_37874c;
        case 0x378750u: goto label_378750;
        case 0x378754u: goto label_378754;
        case 0x378758u: goto label_378758;
        case 0x37875cu: goto label_37875c;
        case 0x378760u: goto label_378760;
        case 0x378764u: goto label_378764;
        case 0x378768u: goto label_378768;
        case 0x37876cu: goto label_37876c;
        case 0x378770u: goto label_378770;
        case 0x378774u: goto label_378774;
        case 0x378778u: goto label_378778;
        case 0x37877cu: goto label_37877c;
        case 0x378780u: goto label_378780;
        case 0x378784u: goto label_378784;
        case 0x378788u: goto label_378788;
        case 0x37878cu: goto label_37878c;
        case 0x378790u: goto label_378790;
        case 0x378794u: goto label_378794;
        case 0x378798u: goto label_378798;
        case 0x37879cu: goto label_37879c;
        case 0x3787a0u: goto label_3787a0;
        case 0x3787a4u: goto label_3787a4;
        case 0x3787a8u: goto label_3787a8;
        case 0x3787acu: goto label_3787ac;
        case 0x3787b0u: goto label_3787b0;
        case 0x3787b4u: goto label_3787b4;
        case 0x3787b8u: goto label_3787b8;
        case 0x3787bcu: goto label_3787bc;
        case 0x3787c0u: goto label_3787c0;
        case 0x3787c4u: goto label_3787c4;
        case 0x3787c8u: goto label_3787c8;
        case 0x3787ccu: goto label_3787cc;
        case 0x3787d0u: goto label_3787d0;
        case 0x3787d4u: goto label_3787d4;
        case 0x3787d8u: goto label_3787d8;
        case 0x3787dcu: goto label_3787dc;
        case 0x3787e0u: goto label_3787e0;
        case 0x3787e4u: goto label_3787e4;
        case 0x3787e8u: goto label_3787e8;
        case 0x3787ecu: goto label_3787ec;
        case 0x3787f0u: goto label_3787f0;
        case 0x3787f4u: goto label_3787f4;
        case 0x3787f8u: goto label_3787f8;
        case 0x3787fcu: goto label_3787fc;
        case 0x378800u: goto label_378800;
        case 0x378804u: goto label_378804;
        case 0x378808u: goto label_378808;
        case 0x37880cu: goto label_37880c;
        default: break;
    }

    ctx->pc = 0x378688u;

label_378688:
    // 0x378688: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x378688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_37868c:
    // 0x37868c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x37868cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_378690:
    // 0x378690: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x378690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_378694:
    // 0x378694: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x378694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_378698:
    // 0x378698: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x378698u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_37869c:
    // 0x37869c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x37869cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_3786a0:
    // 0x3786a0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3786a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3786a4:
    // 0x3786a4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3786a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_3786a8:
    // 0x3786a8: 0x2691002c  addiu       $s1, $s4, 0x2C
    ctx->pc = 0x3786a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
label_3786ac:
    // 0x3786ac: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3786acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_3786b0:
    // 0x3786b0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3786b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_3786b4:
    // 0x3786b4: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3786b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_3786b8:
    // 0x3786b8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3786b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_3786bc:
    // 0x3786bc: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x3786bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_3786c0:
    // 0x3786c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3786c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3786c4:
    // 0x3786c4: 0xc103468  jal         func_40D1A0
label_3786c8:
    if (ctx->pc == 0x3786C8u) {
        ctx->pc = 0x3786C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3786C4u;
        // 0x3786c8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3786CCu;
        goto label_3786cc;
    }
    ctx->pc = 0x3786C4u;
    SET_GPR_U32(ctx, 31, 0x3786CCu);
    ctx->pc = 0x3786C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3786C4u;
    // 0x3786c8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3786C4u, 0x3786CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3786CCu;
label_3786cc:
    // 0x3786cc: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_3786d0:
    if (ctx->pc == 0x3786D0u) {
        ctx->pc = 0x3786D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3786CCu;
        // 0x3786d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3786D4u;
        goto label_3786d4;
    }
    ctx->pc = 0x3786CCu;
    {
        const bool branch_taken_0x3786cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3786D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3786CCu;
        // 0x3786d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3786cc) {
            ctx->pc = 0x3787D0u;
            goto label_3787d0;
        }
    }
    ctx->pc = 0x3786D4u;
label_3786d4:
    // 0x3786d4: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x3786d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_3786d8:
    // 0x3786d8: 0xc103468  jal         func_40D1A0
label_3786dc:
    if (ctx->pc == 0x3786DCu) {
        ctx->pc = 0x3786DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3786D8u;
        // 0x3786dc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3786E0u;
        goto label_3786e0;
    }
    ctx->pc = 0x3786D8u;
    SET_GPR_U32(ctx, 31, 0x3786E0u);
    ctx->pc = 0x3786DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3786D8u;
    // 0x3786dc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3786D8u, 0x3786E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3786E0u;
label_3786e0:
    // 0x3786e0: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_3786e4:
    if (ctx->pc == 0x3786E4u) {
        ctx->pc = 0x3786E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3786E0u;
        // 0x3786e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3786E8u;
        goto label_3786e8;
    }
    ctx->pc = 0x3786E0u;
    {
        const bool branch_taken_0x3786e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3786E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3786E0u;
        // 0x3786e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3786e0) {
            ctx->pc = 0x3787D0u;
            goto label_3787d0;
        }
    }
    ctx->pc = 0x3786E8u;
label_3786e8:
    // 0x3786e8: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x3786e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_3786ec:
    // 0x3786ec: 0xc103468  jal         func_40D1A0
label_3786f0:
    if (ctx->pc == 0x3786F0u) {
        ctx->pc = 0x3786F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3786ECu;
        // 0x3786f0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3786F4u;
        goto label_3786f4;
    }
    ctx->pc = 0x3786ECu;
    SET_GPR_U32(ctx, 31, 0x3786F4u);
    ctx->pc = 0x3786F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3786ECu;
    // 0x3786f0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3786ECu, 0x3786F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3786F4u;
label_3786f4:
    // 0x3786f4: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_3786f8:
    if (ctx->pc == 0x3786F8u) {
        ctx->pc = 0x3786F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3786F4u;
        // 0x3786f8: 0x8fb20004  lw          $s2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3786FCu;
        goto label_3786fc;
    }
    ctx->pc = 0x3786F4u;
    {
        const bool branch_taken_0x3786f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3786F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3786F4u;
        // 0x3786f8: 0x8fb20004  lw          $s2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3786f4) {
            ctx->pc = 0x3787D0u;
            goto label_3787d0;
        }
    }
    ctx->pc = 0x3786FCu;
label_3786fc:
    // 0x3786fc: 0x1a400036  blez        $s2, . + 4 + (0x36 << 2)
label_378700:
    if (ctx->pc == 0x378700u) {
        ctx->pc = 0x378700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3786FCu;
        // 0x378700: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378704u;
        goto label_378704;
    }
    ctx->pc = 0x3786FCu;
    {
        const bool branch_taken_0x3786fc = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x378700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3786FCu;
        // 0x378700: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3786fc) {
            ctx->pc = 0x3787D8u;
            goto label_3787d8;
        }
    }
    ctx->pc = 0x378704u;
label_378704:
    // 0x378704: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x378704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_378708:
    // 0x378708: 0x8fbe0008  lw          $fp, 0x8($sp)
    ctx->pc = 0x378708u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_37870c:
    // 0x37870c: 0x12b040  sll         $s6, $s2, 1
    ctx->pc = 0x37870cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_378710:
    // 0x378710: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x378710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_378714:
    // 0x378714: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x378714u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_378718:
    // 0x378718: 0xc0de242  jal         func_378908
label_37871c:
    if (ctx->pc == 0x37871Cu) {
        ctx->pc = 0x37871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378718u;
        // 0x37871c: 0x8e970000  lw          $s7, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378720u;
        goto label_378720;
    }
    ctx->pc = 0x378718u;
    SET_GPR_U32(ctx, 31, 0x378720u);
    ctx->pc = 0x37871Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378718u;
    // 0x37871c: 0x8e970000  lw          $s7, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378908u, 0x378718u, 0x378720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378720u;
label_378720:
    // 0x378720: 0x2f61821  addu        $v1, $s7, $s6
    ctx->pc = 0x378720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
label_378724:
    // 0x378724: 0x1e1040  sll         $v0, $fp, 1
    ctx->pc = 0x378724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_378728:
    // 0x378728: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x378728u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_37872c:
    // 0x37872c: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x37872cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_378730:
    // 0x378730: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x378730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_378734:
    // 0x378734: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x378734u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_378738:
    // 0x378738: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x378738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_37873c:
    // 0x37873c: 0x40f809  jalr        $v0
label_378740:
    if (ctx->pc == 0x378740u) {
        ctx->pc = 0x378740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37873Cu;
        // 0x378740: 0x34a50116  ori         $a1, $a1, 0x116 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)278);
        ctx->in_delay_slot = false;
        ctx->pc = 0x378744u;
        goto label_378744;
    }
    ctx->pc = 0x37873Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x378744u);
        ctx->pc = 0x378740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37873Cu;
        // 0x378740: 0x34a50116  ori         $a1, $a1, 0x116 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)278);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37873Cu, 0x378744u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x378744u;
label_378744:
    // 0x378744: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x378744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_378748:
    // 0x378748: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_37874c:
    if (ctx->pc == 0x37874Cu) {
        ctx->pc = 0x37874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378748u;
        // 0x37874c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378750u;
        goto label_378750;
    }
    ctx->pc = 0x378748u;
    {
        const bool branch_taken_0x378748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378748u;
        // 0x37874c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378748) {
            ctx->pc = 0x378788u;
            goto label_378788;
        }
    }
    ctx->pc = 0x378750u;
label_378750:
    // 0x378750: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x378750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_378754:
    // 0x378754: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x378754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_378758:
    // 0x378758: 0xc0bb7e6  jal         func_2EDF98
label_37875c:
    if (ctx->pc == 0x37875Cu) {
        ctx->pc = 0x37875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378758u;
        // 0x37875c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378760u;
        goto label_378760;
    }
    ctx->pc = 0x378758u;
    SET_GPR_U32(ctx, 31, 0x378760u);
    ctx->pc = 0x37875Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378758u;
    // 0x37875c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x378758u, 0x378760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378760u;
label_378760:
    // 0x378760: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x378760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_378764:
    // 0x378764: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x378764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_378768:
    // 0x378768: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x378768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_37876c:
    // 0x37876c: 0xae82002c  sw          $v0, 0x2C($s4)
    ctx->pc = 0x37876cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
label_378770:
    // 0x378770: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x378770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_378774:
    // 0x378774: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x378774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_378778:
    // 0x378778: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x378778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_37877c:
    // 0x37877c: 0xae3e0008  sw          $fp, 0x8($s1)
    ctx->pc = 0x37877cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 30));
label_378780:
    // 0x378780: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x378780u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_378784:
    // 0x378784: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x378784u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_378788:
    // 0x378788: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_37878c:
    if (ctx->pc == 0x37878Cu) {
        ctx->pc = 0x37878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378788u;
        // 0x37878c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378790u;
        goto label_378790;
    }
    ctx->pc = 0x378788u;
    {
        const bool branch_taken_0x378788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x37878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378788u;
        // 0x37878c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378788) {
            ctx->pc = 0x3787D0u;
            goto label_3787d0;
        }
    }
    ctx->pc = 0x378790u;
label_378790:
    // 0x378790: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x378790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_378794:
    // 0x378794: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x378794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_378798:
    // 0x378798: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x378798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_37879c:
    // 0x37879c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x37879cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3787a0:
    // 0x3787a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3787a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3787a4:
    // 0x3787a4: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x3787a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3787a8:
    // 0x3787a8: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x3787a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_3787ac:
    // 0x3787ac: 0xc10480a  jal         func_412028
label_3787b0:
    if (ctx->pc == 0x3787B0u) {
        ctx->pc = 0x3787B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3787ACu;
        // 0x3787b0: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3787B4u;
        goto label_3787b4;
    }
    ctx->pc = 0x3787ACu;
    SET_GPR_U32(ctx, 31, 0x3787B4u);
    ctx->pc = 0x3787B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3787ACu;
    // 0x3787b0: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3787ACu, 0x3787B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3787B4u;
label_3787b4:
    // 0x3787b4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_3787b8:
    if (ctx->pc == 0x3787B8u) {
        ctx->pc = 0x3787B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3787B4u;
        // 0x3787b8: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3787BCu;
        goto label_3787bc;
    }
    ctx->pc = 0x3787B4u;
    {
        const bool branch_taken_0x3787b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3787b4) {
            ctx->pc = 0x3787B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3787B4u;
            // 0x3787b8: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3787DCu;
            goto label_3787dc;
        }
    }
    ctx->pc = 0x3787BCu;
label_3787bc:
    // 0x3787bc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3787bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3787c0:
    // 0x3787c0: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x3787c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3787c4:
    // 0x3787c4: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3787c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3787c8:
    // 0x3787c8: 0x40f809  jalr        $v0
label_3787cc:
    if (ctx->pc == 0x3787CCu) {
        ctx->pc = 0x3787CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3787C8u;
        // 0x3787cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3787D0u;
        goto label_3787d0;
    }
    ctx->pc = 0x3787C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3787D0u);
        ctx->pc = 0x3787CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3787C8u;
        // 0x3787cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3787C8u, 0x3787D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3787D0u;
label_3787d0:
    // 0x3787d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_3787d4:
    if (ctx->pc == 0x3787D4u) {
        ctx->pc = 0x3787D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3787D0u;
        // 0x3787d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3787D8u;
        goto label_3787d8;
    }
    ctx->pc = 0x3787D0u;
    {
        const bool branch_taken_0x3787d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3787D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3787D0u;
        // 0x3787d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3787d0) {
            ctx->pc = 0x3787DCu;
            goto label_3787dc;
        }
    }
    ctx->pc = 0x3787D8u;
label_3787d8:
    // 0x3787d8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3787d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3787dc:
    // 0x3787dc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3787dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3787e0:
    // 0x3787e0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3787e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3787e4:
    // 0x3787e4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3787e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3787e8:
    // 0x3787e8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3787e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3787ec:
    // 0x3787ec: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3787ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3787f0:
    // 0x3787f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3787f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3787f4:
    // 0x3787f4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3787f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3787f8:
    // 0x3787f8: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3787f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3787fc:
    // 0x3787fc: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3787fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_378800:
    // 0x378800: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x378800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_378804:
    // 0x378804: 0x3e00008  jr          $ra
label_378808:
    if (ctx->pc == 0x378808u) {
        ctx->pc = 0x378808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378804u;
        // 0x378808: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37880Cu;
        goto label_37880c;
    }
    ctx->pc = 0x378804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378804u;
        // 0x378808: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37880Cu;
label_37880c:
    // 0x37880c: 0x0  nop
    ctx->pc = 0x37880cu;
    // NOP
    ctx->pc = 0x378810u;
}
