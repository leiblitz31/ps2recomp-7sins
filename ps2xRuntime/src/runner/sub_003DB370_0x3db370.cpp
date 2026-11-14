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

// Function: sub_003DB370
// Address: 0x3db370 - 0x3db950
void sub_003DB370_0x3db370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB370_0x3db370");
#endif

    switch (ctx->pc) {
        case 0x3db3c8u: goto label_3db3c8;
        case 0x3db3d4u: goto label_3db3d4;
        case 0x3db3e4u: goto label_3db3e4;
        case 0x3db3fcu: goto label_3db3fc;
        case 0x3db410u: goto label_3db410;
        case 0x3db41cu: goto label_3db41c;
        case 0x3db450u: goto label_3db450;
        case 0x3db584u: goto label_3db584;
        case 0x3db644u: goto label_3db644;
        case 0x3db6fcu: goto label_3db6fc;
        case 0x3db70cu: goto label_3db70c;
        case 0x3db718u: goto label_3db718;
        case 0x3db740u: goto label_3db740;
        case 0x3db7fcu: goto label_3db7fc;
        default: break;
    }

    ctx->pc = 0x3db370u;

    // 0x3db370: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3db370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3db374: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3db374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3db378: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3db378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3db37c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3db37cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db380: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3db380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3db384: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3db384u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db388: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3db388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x3db38c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3db38cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db390: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3db390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3db394: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3db394u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db398: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3db398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3db39c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3db39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3db3a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3db3a4: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x3db3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x3db3a8: 0x18400041  blez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x3DB3A8u;
    {
        const bool branch_taken_0x3db3a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3DB3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB3A8u;
        // 0x3db3ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db3a8) {
            ctx->pc = 0x3DB4B0u;
            goto label_3db4b0;
        }
    }
    ctx->pc = 0x3DB3B0u;
    // 0x3db3b0: 0x92430024  lbu         $v1, 0x24($s2)
    ctx->pc = 0x3db3b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x3db3b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3db3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3db3b8: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DB3B8u;
    {
        const bool branch_taken_0x3db3b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3db3b8) {
            ctx->pc = 0x3DB3BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DB3B8u;
            // 0x3db3bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DB3CCu;
            goto label_3db3cc;
        }
    }
    ctx->pc = 0x3DB3C0u;
    // 0x3db3c0: 0xc0f7016  jal         func_3DC058
    ctx->pc = 0x3DB3C0u;
    SET_GPR_U32(ctx, 31, 0x3DB3C8u);
    ctx->pc = 0x3DC058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC058u, 0x3DB3C0u, 0x3DB3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB3C8u;
label_3db3c8:
    // 0x3db3c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3db3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3db3cc:
    // 0x3db3cc: 0xc0f6722  jal         func_3D9C88
    ctx->pc = 0x3DB3CCu;
    SET_GPR_U32(ctx, 31, 0x3DB3D4u);
    ctx->pc = 0x3DB3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB3CCu;
    // 0x3db3d0: 0x26450b28  addiu       $a1, $s2, 0xB28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9C88u, 0x3DB3CCu, 0x3DB3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB3D4u;
label_3db3d4:
    // 0x3db3d4: 0x265000a4  addiu       $s0, $s2, 0xA4
    ctx->pc = 0x3db3d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 164));
    // 0x3db3d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3db3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db3dc: 0xc0f6722  jal         func_3D9C88
    ctx->pc = 0x3DB3DCu;
    SET_GPR_U32(ctx, 31, 0x3DB3E4u);
    ctx->pc = 0x3DB3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB3DCu;
    // 0x3db3e0: 0x26450b34  addiu       $a1, $s2, 0xB34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2868));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9C88u, 0x3DB3DCu, 0x3DB3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB3E4u;
label_3db3e4:
    // 0x3db3e4: 0x26510998  addiu       $s1, $s2, 0x998
    ctx->pc = 0x3db3e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 2456));
    // 0x3db3e8: 0x8e460b2c  lw          $a2, 0xB2C($s2)
    ctx->pc = 0x3db3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2860)));
    // 0x3db3ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3db3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db3f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3db3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db3f4: 0xc0f68ea  jal         func_3DA3A8
    ctx->pc = 0x3DB3F4u;
    SET_GPR_U32(ctx, 31, 0x3DB3FCu);
    ctx->pc = 0x3DB3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB3F4u;
    // 0x3db3f8: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA3A8u, 0x3DB3F4u, 0x3DB3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB3FCu;
label_3db3fc:
    // 0x3db3fc: 0x8e460b38  lw          $a2, 0xB38($s2)
    ctx->pc = 0x3db3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2872)));
    // 0x3db400: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3db400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db404: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3db404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db408: 0xc0f68ea  jal         func_3DA3A8
    ctx->pc = 0x3DB408u;
    SET_GPR_U32(ctx, 31, 0x3DB410u);
    ctx->pc = 0x3DB40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB408u;
    // 0x3db40c: 0x26510a8c  addiu       $s1, $s2, 0xA8C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 2700));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA3A8u, 0x3DB408u, 0x3DB410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB410u;
label_3db410:
    // 0x3db410: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3db410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db414: 0xc0f6722  jal         func_3D9C88
    ctx->pc = 0x3DB414u;
    SET_GPR_U32(ctx, 31, 0x3DB41Cu);
    ctx->pc = 0x3DB418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB414u;
    // 0x3db418: 0x26450b40  addiu       $a1, $s2, 0xB40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9C88u, 0x3DB414u, 0x3DB41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB41Cu;
label_3db41c:
    // 0x3db41c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3db41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3db420: 0x26440a8e  addiu       $a0, $s2, 0xA8E
    ctx->pc = 0x3db420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2702));
    // 0x3db424: 0x2446c988  addiu       $a2, $v0, -0x3678
    ctx->pc = 0x3db424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953352));
    // 0x3db428: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x3db428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3db42c: 0x90c20012  lbu         $v0, 0x12($a2)
    ctx->pc = 0x3db42cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5FC99Au));
    // 0x3db430: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3db430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3db434: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3db434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3db438: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x3db438u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3db43c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3DB43Cu;
    {
        const bool branch_taken_0x3db43c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DB440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB43Cu;
        // 0x3db440: 0x66880004  daddiu      $t0, $s4, 0x4 (Delay Slot)
        SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db43c) {
            ctx->pc = 0x3DB474u;
            goto label_3db474;
        }
    }
    ctx->pc = 0x3DB444u;
    // 0x3db444: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3db444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db448: 0x24c40012  addiu       $a0, $a2, 0x12
    ctx->pc = 0x3db448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 18));
    // 0x3db44c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3db44cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_3db450:
    // 0x3db450: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x3db450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3db454: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3DB454u;
    {
        const bool branch_taken_0x3db454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DB458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB454u;
        // 0x3db458: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db454) {
            ctx->pc = 0x3DB474u;
            goto label_3db474;
        }
    }
    ctx->pc = 0x3DB45Cu;
    // 0x3db45c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3db45cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3db460: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3db460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3db464: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3db464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3db468: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x3db468u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3db46c: 0x5060fff8  beql        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3DB46Cu;
    {
        const bool branch_taken_0x3db46c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db46c) {
            ctx->pc = 0x3DB470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DB46Cu;
            // 0x3db470: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DB450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3db450;
        }
    }
    ctx->pc = 0x3DB474u;
label_3db474:
    // 0x3db474: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x3db474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3db478: 0xde4416b8  ld          $a0, 0x16B8($s2)
    ctx->pc = 0x3db478u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 5816)));
    // 0x3db47c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x3db47cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3db480: 0xde4316c0  ld          $v1, 0x16C0($s2)
    ctx->pc = 0x3db480u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 5824)));
    // 0x3db484: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3db484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3db488: 0x2442000e  addiu       $v0, $v0, 0xE
    ctx->pc = 0x3db488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
    // 0x3db48c: 0x6463000a  daddiu      $v1, $v1, 0xA
    ctx->pc = 0x3db48cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)10);
    // 0x3db490: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x3db490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3db494: 0x318fa  dsrl        $v1, $v1, 3
    ctx->pc = 0x3db494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 3);
    // 0x3db498: 0x6485000a  daddiu      $a1, $a0, 0xA
    ctx->pc = 0x3db498u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)10);
    // 0x3db49c: 0xfe4416b8  sd          $a0, 0x16B8($s2)
    ctx->pc = 0x3db49cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 5816), GPR_U64(ctx, 4));
    // 0x3db4a0: 0x528fa  dsrl        $a1, $a1, 3
    ctx->pc = 0x3db4a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 3);
    // 0x3db4a4: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x3db4a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3db4a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3DB4A8u;
    {
        const bool branch_taken_0x3db4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB4A8u;
        // 0x3db4ac: 0x62280a  movz        $a1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db4a8) {
            ctx->pc = 0x3DB4C8u;
            goto label_3db4c8;
        }
    }
    ctx->pc = 0x3DB4B0u;
label_3db4b0:
    // 0x3db4b0: 0x66830005  daddiu      $v1, $s4, 0x5
    ctx->pc = 0x3db4b0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)5);
    // 0x3db4b4: 0x265000a4  addiu       $s0, $s2, 0xA4
    ctx->pc = 0x3db4b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 164));
    // 0x3db4b8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3db4b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db4bc: 0x26550998  addiu       $s5, $s2, 0x998
    ctx->pc = 0x3db4bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 2456));
    // 0x3db4c0: 0x66880004  daddiu      $t0, $s4, 0x4
    ctx->pc = 0x3db4c0u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)4);
    // 0x3db4c4: 0x26510a8c  addiu       $s1, $s2, 0xA8C
    ctx->pc = 0x3db4c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 2700));
label_3db4c8:
    // 0x3db4c8: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x3db4c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3db4cc: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3DB4CCu;
    {
        const bool branch_taken_0x3db4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3db4cc) {
            ctx->pc = 0x3DB58Cu;
            goto label_3db58c;
        }
    }
    ctx->pc = 0x3DB4D4u;
    // 0x3db4d4: 0x12c0002d  beqz        $s6, . + 4 + (0x2D << 2)
    ctx->pc = 0x3DB4D4u;
    {
        const bool branch_taken_0x3db4d4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB4D4u;
        // 0x3db4d8: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db4d4) {
            ctx->pc = 0x3DB58Cu;
            goto label_3db58c;
        }
    }
    ctx->pc = 0x3DB4DCu;
    // 0x3db4dc: 0x8e4416d4  lw          $a0, 0x16D4($s2)
    ctx->pc = 0x3db4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x3db4e0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x3db4e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3db4e4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3DB4E4u;
    {
        const bool branch_taken_0x3db4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB4E4u;
        // 0x3db4e8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db4e4) {
            ctx->pc = 0x3DB554u;
            goto label_3db554;
        }
    }
    ctx->pc = 0x3DB4ECu;
    // 0x3db4ec: 0x964216d0  lhu         $v0, 0x16D0($s2)
    ctx->pc = 0x3db4ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x3db4f0: 0x932804  sllv        $a1, $s3, $a0
    ctx->pc = 0x3db4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 4) & 0x1F));
    // 0x3db4f4: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x3db4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x3db4f8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3db4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3db4fc: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3db4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3db500: 0xa64216d0  sh          $v0, 0x16D0($s2)
    ctx->pc = 0x3db500u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3db504: 0x3265ffff  andi        $a1, $s3, 0xFFFF
    ctx->pc = 0x3db504u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x3db508: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3db508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3db50c: 0x924216d0  lbu         $v0, 0x16D0($s2)
    ctx->pc = 0x3db50cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x3db510: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3db510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3db514: 0x24870001  addiu       $a3, $a0, 0x1
    ctx->pc = 0x3db514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3db518: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3db518u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3db51c: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x3db51cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
    // 0x3db520: 0x964316d0  lhu         $v1, 0x16D0($s2)
    ctx->pc = 0x3db520u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x3db524: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3db524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3db528: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3db528u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3db52c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3db52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3db530: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3db530u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3db534: 0xae47001c  sw          $a3, 0x1C($s2)
    ctx->pc = 0x3db534u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 7));
    // 0x3db538: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x3db538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x3db53c: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x3db53cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3db540: 0x2442fff3  addiu       $v0, $v0, -0xD
    ctx->pc = 0x3db540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967283));
    // 0x3db544: 0xc52807  srav        $a1, $a1, $a2
    ctx->pc = 0x3db544u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x3db548: 0xae4216d4  sw          $v0, 0x16D4($s2)
    ctx->pc = 0x3db548u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5844), GPR_U32(ctx, 2));
    // 0x3db54c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3DB54Cu;
    {
        const bool branch_taken_0x3db54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB54Cu;
        // 0x3db550: 0xa64516d0  sh          $a1, 0x16D0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 5840), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db54c) {
            ctx->pc = 0x3DB56Cu;
            goto label_3db56c;
        }
    }
    ctx->pc = 0x3DB554u;
label_3db554:
    // 0x3db554: 0x964216d0  lhu         $v0, 0x16D0($s2)
    ctx->pc = 0x3db554u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x3db558: 0x931804  sllv        $v1, $s3, $a0
    ctx->pc = 0x3db558u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 4) & 0x1F));
    // 0x3db55c: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x3db55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x3db560: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3db560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3db564: 0xae4416d4  sw          $a0, 0x16D4($s2)
    ctx->pc = 0x3db564u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5844), GPR_U32(ctx, 4));
    // 0x3db568: 0xa64216d0  sh          $v0, 0x16D0($s2)
    ctx->pc = 0x3db568u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 5840), (uint16_t)GPR_U32(ctx, 2));
label_3db56c:
    // 0x3db56c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3db56cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db570: 0x14303c  dsll32      $a2, $s4, 0
    ctx->pc = 0x3db570u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) << (32 + 0));
    // 0x3db574: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3db574u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3db578: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3db578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db57c: 0xc0f70dc  jal         func_3DC370
    ctx->pc = 0x3DB57Cu;
    SET_GPR_U32(ctx, 31, 0x3DB584u);
    ctx->pc = 0x3DB580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB57Cu;
    // 0x3db580: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC370u, 0x3DB57Cu, 0x3DB584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB584u;
label_3db584:
    // 0x3db584: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x3DB584u;
    {
        const bool branch_taken_0x3db584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB584u;
        // 0x3db588: 0x26050474  addiu       $a1, $s0, 0x474 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db584) {
            ctx->pc = 0x3DB710u;
            goto label_3db710;
        }
    }
    ctx->pc = 0x3DB58Cu;
label_3db58c:
    // 0x3db58c: 0x1465002f  bne         $v1, $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x3DB58Cu;
    {
        const bool branch_taken_0x3db58c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3DB590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB58Cu;
        // 0x3db590: 0x8e4416d4  lw          $a0, 0x16D4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db58c) {
            ctx->pc = 0x3DB64Cu;
            goto label_3db64c;
        }
    }
    ctx->pc = 0x3DB594u;
    // 0x3db594: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x3db594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3db598: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x3db598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3db59c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3DB59Cu;
    {
        const bool branch_taken_0x3db59c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB59Cu;
        // 0x3db5a0: 0x26660002  addiu       $a2, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db59c) {
            ctx->pc = 0x3DB610u;
            goto label_3db610;
        }
    }
    ctx->pc = 0x3DB5A4u;
    // 0x3db5a4: 0x964216d0  lhu         $v0, 0x16D0($s2)
    ctx->pc = 0x3db5a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x3db5a8: 0x862004  sllv        $a0, $a2, $a0
    ctx->pc = 0x3db5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x3db5ac: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x3db5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x3db5b0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3db5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3db5b4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3db5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3db5b8: 0xa64216d0  sh          $v0, 0x16D0($s2)
    ctx->pc = 0x3db5b8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3db5bc: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x3db5bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3db5c0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3db5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3db5c4: 0x924216d0  lbu         $v0, 0x16D0($s2)
    ctx->pc = 0x3db5c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x3db5c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3db5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3db5cc: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x3db5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3db5d0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3db5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3db5d4: 0xae45001c  sw          $a1, 0x1C($s2)
    ctx->pc = 0x3db5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 5));
    // 0x3db5d8: 0x964316d0  lhu         $v1, 0x16D0($s2)
    ctx->pc = 0x3db5d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x3db5dc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3db5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3db5e0: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3db5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3db5e4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3db5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3db5e8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3db5e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3db5ec: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3db5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3db5f0: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x3db5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
    // 0x3db5f4: 0x8e4316d4  lw          $v1, 0x16D4($s2)
    ctx->pc = 0x3db5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x3db5f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3db5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3db5fc: 0x2463fff3  addiu       $v1, $v1, -0xD
    ctx->pc = 0x3db5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967283));
    // 0x3db600: 0x463007  srav        $a2, $a2, $v0
    ctx->pc = 0x3db600u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x3db604: 0xae4316d4  sw          $v1, 0x16D4($s2)
    ctx->pc = 0x3db604u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5844), GPR_U32(ctx, 3));
    // 0x3db608: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DB608u;
    {
        const bool branch_taken_0x3db608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB608u;
        // 0x3db60c: 0xa64616d0  sh          $a2, 0x16D0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 5840), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db608) {
            ctx->pc = 0x3DB62Cu;
            goto label_3db62c;
        }
    }
    ctx->pc = 0x3DB610u;
label_3db610:
    // 0x3db610: 0x964216d0  lhu         $v0, 0x16D0($s2)
    ctx->pc = 0x3db610u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x3db614: 0x26630002  addiu       $v1, $s3, 0x2
    ctx->pc = 0x3db614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x3db618: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x3db618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x3db61c: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x3db61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x3db620: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3db620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3db624: 0xae4416d4  sw          $a0, 0x16D4($s2)
    ctx->pc = 0x3db624u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5844), GPR_U32(ctx, 4));
    // 0x3db628: 0xa64216d0  sh          $v0, 0x16D0($s2)
    ctx->pc = 0x3db628u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 5840), (uint16_t)GPR_U32(ctx, 2));
label_3db62c:
    // 0x3db62c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3db62cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3db630: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x3db630u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x3db634: 0x24a5c9a0  addiu       $a1, $a1, -0x3660
    ctx->pc = 0x3db634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953376));
    // 0x3db638: 0x24c6ce20  addiu       $a2, $a2, -0x31E0
    ctx->pc = 0x3db638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954528));
    // 0x3db63c: 0xc0f6e54  jal         func_3DB950
    ctx->pc = 0x3DB63Cu;
    SET_GPR_U32(ctx, 31, 0x3DB644u);
    ctx->pc = 0x3DB640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB63Cu;
    // 0x3db640: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB950u, 0x3DB63Cu, 0x3DB644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB644u;
label_3db644:
    // 0x3db644: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x3DB644u;
    {
        const bool branch_taken_0x3db644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB644u;
        // 0x3db648: 0x26050474  addiu       $a1, $s0, 0x474 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db644) {
            ctx->pc = 0x3DB710u;
            goto label_3db710;
        }
    }
    ctx->pc = 0x3DB64Cu;
label_3db64c:
    // 0x3db64c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x3db64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3db650: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x3db650u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3db654: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3DB654u;
    {
        const bool branch_taken_0x3db654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB654u;
        // 0x3db658: 0x964216d0  lhu         $v0, 0x16D0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 5840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db654) {
            ctx->pc = 0x3DB6C8u;
            goto label_3db6c8;
        }
    }
    ctx->pc = 0x3DB65Cu;
    // 0x3db65c: 0x26660004  addiu       $a2, $s3, 0x4
    ctx->pc = 0x3db65cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x3db660: 0x862004  sllv        $a0, $a2, $a0
    ctx->pc = 0x3db660u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x3db664: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x3db664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x3db668: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3db668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3db66c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3db66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3db670: 0xa64216d0  sh          $v0, 0x16D0($s2)
    ctx->pc = 0x3db670u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3db674: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x3db674u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3db678: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3db678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3db67c: 0x924216d0  lbu         $v0, 0x16D0($s2)
    ctx->pc = 0x3db67cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x3db680: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3db680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3db684: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x3db684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3db688: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3db688u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3db68c: 0xae45001c  sw          $a1, 0x1C($s2)
    ctx->pc = 0x3db68cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 5));
    // 0x3db690: 0x964316d0  lhu         $v1, 0x16D0($s2)
    ctx->pc = 0x3db690u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x3db694: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3db694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3db698: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3db698u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3db69c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3db69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3db6a0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3db6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3db6a4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3db6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3db6a8: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x3db6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
    // 0x3db6ac: 0x8e4316d4  lw          $v1, 0x16D4($s2)
    ctx->pc = 0x3db6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x3db6b0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3db6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3db6b4: 0x2463fff3  addiu       $v1, $v1, -0xD
    ctx->pc = 0x3db6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967283));
    // 0x3db6b8: 0x463007  srav        $a2, $a2, $v0
    ctx->pc = 0x3db6b8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x3db6bc: 0xae4316d4  sw          $v1, 0x16D4($s2)
    ctx->pc = 0x3db6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5844), GPR_U32(ctx, 3));
    // 0x3db6c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3DB6C0u;
    {
        const bool branch_taken_0x3db6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB6C0u;
        // 0x3db6c4: 0xa64616d0  sh          $a2, 0x16D0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 5840), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db6c0) {
            ctx->pc = 0x3DB6E0u;
            goto label_3db6e0;
        }
    }
    ctx->pc = 0x3DB6C8u;
label_3db6c8:
    // 0x3db6c8: 0x26630004  addiu       $v1, $s3, 0x4
    ctx->pc = 0x3db6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x3db6cc: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x3db6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x3db6d0: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x3db6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x3db6d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3db6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3db6d8: 0xae4416d4  sw          $a0, 0x16D4($s2)
    ctx->pc = 0x3db6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5844), GPR_U32(ctx, 4));
    // 0x3db6dc: 0xa64216d0  sh          $v0, 0x16D0($s2)
    ctx->pc = 0x3db6dcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 5840), (uint16_t)GPR_U32(ctx, 2));
label_3db6e0:
    // 0x3db6e0: 0x8e450b2c  lw          $a1, 0xB2C($s2)
    ctx->pc = 0x3db6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2860)));
    // 0x3db6e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3db6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db6e8: 0x8e460b38  lw          $a2, 0xB38($s2)
    ctx->pc = 0x3db6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2872)));
    // 0x3db6ec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3db6ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3db6f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3db6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3db6f4: 0xc0f6b0c  jal         func_3DAC30
    ctx->pc = 0x3DB6F4u;
    SET_GPR_U32(ctx, 31, 0x3DB6FCu);
    ctx->pc = 0x3DB6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB6F4u;
    // 0x3db6f8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAC30u, 0x3DB6F4u, 0x3DB6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB6FCu;
label_3db6fc:
    // 0x3db6fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3db6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db700: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3db700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db704: 0xc0f6e54  jal         func_3DB950
    ctx->pc = 0x3DB704u;
    SET_GPR_U32(ctx, 31, 0x3DB70Cu);
    ctx->pc = 0x3DB708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB704u;
    // 0x3db708: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB950u, 0x3DB704u, 0x3DB70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB70Cu;
label_3db70c:
    // 0x3db70c: 0x26050474  addiu       $a1, $s0, 0x474
    ctx->pc = 0x3db70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1140));
label_3db710:
    // 0x3db710: 0x2402011d  addiu       $v0, $zero, 0x11D
    ctx->pc = 0x3db710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
    // 0x3db714: 0x0  nop
    ctx->pc = 0x3db714u;
    // NOP
label_3db718:
    // 0x3db718: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x3db718u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db71c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x3db71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x3db720: 0xa4a0fffc  sh          $zero, -0x4($a1)
    ctx->pc = 0x3db720u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294967292), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db724: 0x0  nop
    ctx->pc = 0x3db724u;
    // NOP
    // 0x3db728: 0x0  nop
    ctx->pc = 0x3db728u;
    // NOP
    // 0x3db72c: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3DB72Cu;
    {
        const bool branch_taken_0x3db72c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3DB730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB72Cu;
        // 0x3db730: 0x24a5fff8  addiu       $a1, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db72c) {
            ctx->pc = 0x3DB718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3db718;
        }
    }
    ctx->pc = 0x3DB734u;
    // 0x3db734: 0x26a60074  addiu       $a2, $s5, 0x74
    ctx->pc = 0x3db734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 116));
    // 0x3db738: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x3db738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x3db73c: 0x0  nop
    ctx->pc = 0x3db73cu;
    // NOP
label_3db740:
    // 0x3db740: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x3db740u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db744: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x3db744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
    // 0x3db748: 0xa4c0fffc  sh          $zero, -0x4($a2)
    ctx->pc = 0x3db748u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294967292), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db74c: 0xa4c0fff8  sh          $zero, -0x8($a2)
    ctx->pc = 0x3db74cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294967288), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db750: 0xa4c0fff4  sh          $zero, -0xC($a2)
    ctx->pc = 0x3db750u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294967284), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db754: 0xa4c0fff0  sh          $zero, -0x10($a2)
    ctx->pc = 0x3db754u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294967280), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db758: 0xa4c0ffec  sh          $zero, -0x14($a2)
    ctx->pc = 0x3db758u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294967276), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db75c: 0xa4c0ffe8  sh          $zero, -0x18($a2)
    ctx->pc = 0x3db75cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294967272), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db760: 0xa4c0ffe4  sh          $zero, -0x1C($a2)
    ctx->pc = 0x3db760u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294967268), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db764: 0xa4c0ffe0  sh          $zero, -0x20($a2)
    ctx->pc = 0x3db764u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294967264), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db768: 0xa4c0ffdc  sh          $zero, -0x24($a2)
    ctx->pc = 0x3db768u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294967260), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db76c: 0xa4c0ffd8  sh          $zero, -0x28($a2)
    ctx->pc = 0x3db76cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294967256), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db770: 0xa4c0ffd4  sh          $zero, -0x2C($a2)
    ctx->pc = 0x3db770u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294967252), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db774: 0xa4c0ffd0  sh          $zero, -0x30($a2)
    ctx->pc = 0x3db774u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294967248), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db778: 0xa4c0ffcc  sh          $zero, -0x34($a2)
    ctx->pc = 0x3db778u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294967244), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db77c: 0xa4c0ffc8  sh          $zero, -0x38($a2)
    ctx->pc = 0x3db77cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294967240), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db780: 0x441ffef  bgez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3DB780u;
    {
        const bool branch_taken_0x3db780 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3DB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB780u;
        // 0x3db784: 0x24c6ffc4  addiu       $a2, $a2, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db780) {
            ctx->pc = 0x3DB740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3db740;
        }
    }
    ctx->pc = 0x3DB788u;
    // 0x3db788: 0x26220048  addiu       $v0, $s1, 0x48
    ctx->pc = 0x3db788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x3db78c: 0xa6200048  sh          $zero, 0x48($s1)
    ctx->pc = 0x3db78cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 72), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db790: 0xa440ffb8  sh          $zero, -0x48($v0)
    ctx->pc = 0x3db790u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967224), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db794: 0xa440fffc  sh          $zero, -0x4($v0)
    ctx->pc = 0x3db794u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967292), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db798: 0xa440fff8  sh          $zero, -0x8($v0)
    ctx->pc = 0x3db798u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967288), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db79c: 0xa440fff4  sh          $zero, -0xC($v0)
    ctx->pc = 0x3db79cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967284), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db7a0: 0xa440fff0  sh          $zero, -0x10($v0)
    ctx->pc = 0x3db7a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967280), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db7a4: 0xa440ffec  sh          $zero, -0x14($v0)
    ctx->pc = 0x3db7a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967276), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db7a8: 0xa440ffe8  sh          $zero, -0x18($v0)
    ctx->pc = 0x3db7a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967272), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db7ac: 0xa440ffe4  sh          $zero, -0x1C($v0)
    ctx->pc = 0x3db7acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967268), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db7b0: 0xa440ffe0  sh          $zero, -0x20($v0)
    ctx->pc = 0x3db7b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967264), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db7b4: 0xa440ffdc  sh          $zero, -0x24($v0)
    ctx->pc = 0x3db7b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967260), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db7b8: 0xa440ffd8  sh          $zero, -0x28($v0)
    ctx->pc = 0x3db7b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967256), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db7bc: 0xa440ffd4  sh          $zero, -0x2C($v0)
    ctx->pc = 0x3db7bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967252), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db7c0: 0xa440ffd0  sh          $zero, -0x30($v0)
    ctx->pc = 0x3db7c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967248), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db7c4: 0xa440ffcc  sh          $zero, -0x34($v0)
    ctx->pc = 0x3db7c4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967244), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db7c8: 0xa440ffc8  sh          $zero, -0x38($v0)
    ctx->pc = 0x3db7c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967240), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db7cc: 0xa440ffc4  sh          $zero, -0x3C($v0)
    ctx->pc = 0x3db7ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967236), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db7d0: 0xa440ffc0  sh          $zero, -0x40($v0)
    ctx->pc = 0x3db7d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967232), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db7d4: 0xa440ffbc  sh          $zero, -0x44($v0)
    ctx->pc = 0x3db7d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967228), (uint16_t)GPR_U32(ctx, 0));
    // 0x3db7d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3db7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3db7dc: 0xa64304a4  sh          $v1, 0x4A4($s2)
    ctx->pc = 0x3db7dcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1188), (uint16_t)GPR_U32(ctx, 3));
    // 0x3db7e0: 0xfe4016c0  sd          $zero, 0x16C0($s2)
    ctx->pc = 0x3db7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 5824), GPR_U64(ctx, 0));
    // 0x3db7e4: 0xfe4016b8  sd          $zero, 0x16B8($s2)
    ctx->pc = 0x3db7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 5816), GPR_U64(ctx, 0));
    // 0x3db7e8: 0xae4016c8  sw          $zero, 0x16C8($s2)
    ctx->pc = 0x3db7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5832), GPR_U32(ctx, 0));
    // 0x3db7ec: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DB7ECu;
    {
        const bool branch_taken_0x3db7ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB7ECu;
        // 0x3db7f0: 0xae4016b0  sw          $zero, 0x16B0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5808), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db7ec) {
            ctx->pc = 0x3DB800u;
            goto label_3db800;
        }
    }
    ctx->pc = 0x3DB7F4u;
    // 0x3db7f4: 0xc0f7094  jal         func_3DC250
    ctx->pc = 0x3DB7F4u;
    SET_GPR_U32(ctx, 31, 0x3DB7FCu);
    ctx->pc = 0x3DB7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB7F4u;
    // 0x3db7f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC250u, 0x3DB7F4u, 0x3DB7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB7FCu;
label_3db7fc:
    // 0x3db7fc: 0x0  nop
    ctx->pc = 0x3db7fcu;
    // NOP
label_3db800:
    // 0x3db800: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3db800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3db804: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3db804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3db808: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3db808u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3db80c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3db80cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3db810: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3db810u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3db814: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3db814u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3db818: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3db818u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3db81c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db820: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB820u;
        // 0x3db824: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB828u;
    // 0x3db828: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3db828u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db82c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3db82cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db830: 0x8d0416b0  lw          $a0, 0x16B0($t0)
    ctx->pc = 0x3db830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5808)));
    // 0x3db834: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x3db834u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db838: 0x8d0516b4  lw          $a1, 0x16B4($t0)
    ctx->pc = 0x3db838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5812)));
    // 0x3db83c: 0x8d0316a8  lw          $v1, 0x16A8($t0)
    ctx->pc = 0x3db83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5800)));
    // 0x3db840: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x3db840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3db844: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3db844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3db848: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x3db848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3db84c: 0xa4470000  sh          $a3, 0x0($v0)
    ctx->pc = 0x3db84cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x3db850: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3db850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3db854: 0xa0690000  sb          $t1, 0x0($v1)
    ctx->pc = 0x3db854u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x3db858: 0x14e00008  bnez        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DB858u;
    {
        const bool branch_taken_0x3db858 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DB85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB858u;
        // 0x3db85c: 0xad0616b0  sw          $a2, 0x16B0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 5808), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db858) {
            ctx->pc = 0x3DB87Cu;
            goto label_3db87c;
        }
    }
    ctx->pc = 0x3DB860u;
    // 0x3db860: 0x92080  sll         $a0, $t1, 2
    ctx->pc = 0x3db860u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x3db864: 0x250300a4  addiu       $v1, $t0, 0xA4
    ctx->pc = 0x3db864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 164));
    // 0x3db868: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3db868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3db86c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3db86cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3db870: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3db870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3db874: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x3DB874u;
    {
        const bool branch_taken_0x3db874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB874u;
        // 0x3db878: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db874) {
            ctx->pc = 0x3DB934u;
            goto label_3db934;
        }
    }
    ctx->pc = 0x3DB87Cu;
label_3db87c:
    // 0x3db87c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3db87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3db880: 0x8d0416c8  lw          $a0, 0x16C8($t0)
    ctx->pc = 0x3db880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5832)));
    // 0x3db884: 0x2442d098  addiu       $v0, $v0, -0x2F68
    ctx->pc = 0x3db884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955160));
    // 0x3db888: 0x250500a4  addiu       $a1, $t0, 0xA4
    ctx->pc = 0x3db888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 164));
    // 0x3db88c: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x3db88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3db890: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3db890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3db894: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3db894u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3db898: 0xad0416c8  sw          $a0, 0x16C8($t0)
    ctx->pc = 0x3db898u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 5832), GPR_U32(ctx, 4));
    // 0x3db89c: 0x24630101  addiu       $v1, $v1, 0x101
    ctx->pc = 0x3db89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 257));
    // 0x3db8a0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3db8a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3db8a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3db8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3db8a8: 0x2ce90100  sltiu       $t1, $a3, 0x100
    ctx->pc = 0x3db8a8u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x3db8ac: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3db8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3db8b0: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x3db8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x3db8b4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x3db8b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3db8b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3db8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3db8bc: 0x11200006  beqz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DB8BCu;
    {
        const bool branch_taken_0x3db8bc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB8BCu;
        // 0x3db8c0: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db8bc) {
            ctx->pc = 0x3DB8D8u;
            goto label_3db8d8;
        }
    }
    ctx->pc = 0x3DB8C4u;
    // 0x3db8c4: 0x24c2ce98  addiu       $v0, $a2, -0x3168
    ctx->pc = 0x3db8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954648));
    // 0x3db8c8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3db8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3db8cc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3db8ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3db8d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3DB8D0u;
    {
        const bool branch_taken_0x3db8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB8D0u;
        // 0x3db8d4: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db8d0) {
            ctx->pc = 0x3DB8ECu;
            goto label_3db8ec;
        }
    }
    ctx->pc = 0x3DB8D8u;
label_3db8d8:
    // 0x3db8d8: 0x24c2ce98  addiu       $v0, $a2, -0x3168
    ctx->pc = 0x3db8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954648));
    // 0x3db8dc: 0x719c2  srl         $v1, $a3, 7
    ctx->pc = 0x3db8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 7));
    // 0x3db8e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3db8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3db8e4: 0x90640100  lbu         $a0, 0x100($v1)
    ctx->pc = 0x3db8e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x3db8e8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3db8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3db8ec:
    // 0x3db8ec: 0x25020998  addiu       $v0, $t0, 0x998
    ctx->pc = 0x3db8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 2456));
    // 0x3db8f0: 0x435021  addu        $t2, $v0, $v1
    ctx->pc = 0x3db8f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3db8f4: 0x11200006  beqz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DB8F4u;
    {
        const bool branch_taken_0x3db8f4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB8F4u;
        // 0x3db8f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db8f4) {
            ctx->pc = 0x3DB910u;
            goto label_3db910;
        }
    }
    ctx->pc = 0x3DB8FCu;
    // 0x3db8fc: 0x24c2ce98  addiu       $v0, $a2, -0x3168
    ctx->pc = 0x3db8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954648));
    // 0x3db900: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3db900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3db904: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3db904u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3db908: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3DB908u;
    {
        const bool branch_taken_0x3db908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB908u;
        // 0x3db90c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db908) {
            ctx->pc = 0x3DB924u;
            goto label_3db924;
        }
    }
    ctx->pc = 0x3DB910u;
label_3db910:
    // 0x3db910: 0x24c2ce98  addiu       $v0, $a2, -0x3168
    ctx->pc = 0x3db910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954648));
    // 0x3db914: 0x719c2  srl         $v1, $a3, 7
    ctx->pc = 0x3db914u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 7));
    // 0x3db918: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3db918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3db91c: 0x90640100  lbu         $a0, 0x100($v1)
    ctx->pc = 0x3db91cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x3db920: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3db920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3db924:
    // 0x3db924: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x3db924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3db928: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3db928u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3db92c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3db92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3db930: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x3db930u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
label_3db934:
    // 0x3db934: 0x8d0316ac  lw          $v1, 0x16AC($t0)
    ctx->pc = 0x3db934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5804)));
    // 0x3db938: 0x8d0216b0  lw          $v0, 0x16B0($t0)
    ctx->pc = 0x3db938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5808)));
    // 0x3db93c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3db93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3db940: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x3db940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x3db944: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB944u;
        // 0x3db948: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB94Cu;
    // 0x3db94c: 0x0  nop
    ctx->pc = 0x3db94cu;
    // NOP
    ctx->pc = 0x3db950u;
}
