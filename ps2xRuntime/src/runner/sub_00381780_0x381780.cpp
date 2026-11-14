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

// Function: sub_00381780
// Address: 0x381780 - 0x381b18
void sub_00381780_0x381780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381780_0x381780");
#endif

    switch (ctx->pc) {
        case 0x3817d8u: goto label_3817d8;
        case 0x3817ecu: goto label_3817ec;
        case 0x381810u: goto label_381810;
        case 0x381910u: goto label_381910;
        case 0x381940u: goto label_381940;
        case 0x381964u: goto label_381964;
        case 0x38198cu: goto label_38198c;
        case 0x3819b0u: goto label_3819b0;
        case 0x3819d4u: goto label_3819d4;
        case 0x381a10u: goto label_381a10;
        case 0x381a40u: goto label_381a40;
        case 0x381a64u: goto label_381a64;
        case 0x381a8cu: goto label_381a8c;
        case 0x381ab0u: goto label_381ab0;
        case 0x381ad4u: goto label_381ad4;
        default: break;
    }

    ctx->pc = 0x381780u;

    // 0x381780: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x381780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x381784: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x381784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x381788: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x381788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x38178c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x38178cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x381790: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x381790u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381794: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x381794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x381798: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x381798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x38179c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x38179cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3817a0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3817a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x3817a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3817a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3817a8: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x3817a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x3817ac: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3817ACu;
    {
        const bool branch_taken_0x3817ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3817ac) {
            ctx->pc = 0x3817B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3817ACu;
            // 0x3817b0: 0x8e840078  lw          $a0, 0x78($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3817D0u;
            goto label_3817d0;
        }
    }
    ctx->pc = 0x3817B4u;
    // 0x3817b4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3817B4u;
    {
        const bool branch_taken_0x3817b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3817B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3817B4u;
        // 0x3817b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3817b4) {
            ctx->pc = 0x3817CCu;
            goto label_3817cc;
        }
    }
    ctx->pc = 0x3817BCu;
    // 0x3817bc: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3817BCu;
    {
        const bool branch_taken_0x3817bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3817C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3817BCu;
        // 0x3817c0: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3817bc) {
            ctx->pc = 0x3817E0u;
            goto label_3817e0;
        }
    }
    ctx->pc = 0x3817C4u;
    // 0x3817c4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3817C4u;
    {
        const bool branch_taken_0x3817c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3817C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3817C4u;
        // 0x3817c8: 0x3c120062  lui         $s2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3817c4) {
            ctx->pc = 0x3817F4u;
            goto label_3817f4;
        }
    }
    ctx->pc = 0x3817CCu;
label_3817cc:
    // 0x3817cc: 0x8e840078  lw          $a0, 0x78($s4)
    ctx->pc = 0x3817ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
label_3817d0:
    // 0x3817d0: 0xc0cb2a6  jal         func_32CA98
    ctx->pc = 0x3817D0u;
    SET_GPR_U32(ctx, 31, 0x3817D8u);
    ctx->pc = 0x3817D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3817D0u;
    // 0x3817d4: 0x8e85007c  lw          $a1, 0x7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CA98u, 0x3817D0u, 0x3817D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3817D8u;
label_3817d8:
    // 0x3817d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3817D8u;
    {
        const bool branch_taken_0x3817d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3817DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3817D8u;
        // 0x3817dc: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3817d8) {
            ctx->pc = 0x3817F0u;
            goto label_3817f0;
        }
    }
    ctx->pc = 0x3817E0u;
label_3817e0:
    // 0x3817e0: 0x8e840078  lw          $a0, 0x78($s4)
    ctx->pc = 0x3817e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x3817e4: 0xc0cb2e6  jal         func_32CB98
    ctx->pc = 0x3817E4u;
    SET_GPR_U32(ctx, 31, 0x3817ECu);
    ctx->pc = 0x3817E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3817E4u;
    // 0x3817e8: 0x8e85008c  lw          $a1, 0x8C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CB98u, 0x3817E4u, 0x3817ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3817ECu;
label_3817ec:
    // 0x3817ec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3817ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3817f0:
    // 0x3817f0: 0x3c120062  lui         $s2, 0x62
    ctx->pc = 0x3817f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
label_3817f4:
    // 0x3817f4: 0x8c51e880  lw          $s1, -0x1780($v0)
    ctx->pc = 0x3817f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961280)));
    // 0x3817f8: 0x2653c4c0  addiu       $s3, $s2, -0x3B40
    ctx->pc = 0x3817f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952128));
    // 0x3817fc: 0xae740010  sw          $s4, 0x10($s3)
    ctx->pc = 0x3817fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 20));
    // 0x381800: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x381800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381804: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x381804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x381808: 0xc10a322  jal         func_428C88
    ctx->pc = 0x381808u;
    SET_GPR_U32(ctx, 31, 0x381810u);
    ctx->pc = 0x38180Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381808u;
    // 0x38180c: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x381808u, 0x381810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381810u;
label_381810:
    // 0x381810: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x381810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x381814: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x381814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x381818: 0x34a50004  ori         $a1, $a1, 0x4
    ctx->pc = 0x381818u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x38181c: 0x3c046c04  lui         $a0, 0x6C04
    ctx->pc = 0x38181cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27652 << 16));
    // 0x381820: 0x348403f0  ori         $a0, $a0, 0x3F0
    ctx->pc = 0x381820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1008);
    // 0x381824: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x381824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x381828: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x381828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x38182c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x38182cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x381830: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x381830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x381834: 0x70852b89  pcpyld      $a1, $a0, $a1
    ctx->pc = 0x381834u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x381838: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x381838u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x38183c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x38183cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x381840: 0x9e260020  lwu         $a2, 0x20($s1)
    ctx->pc = 0x381840u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x381844: 0x9e050008  lwu         $a1, 0x8($s0)
    ctx->pc = 0x381844u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x381848: 0x9e020004  lwu         $v0, 0x4($s0)
    ctx->pc = 0x381848u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x38184c: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x38184cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x381850: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x381850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x381854: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x381854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x381858: 0xc22825  or          $a1, $a2, $v0
    ctx->pc = 0x381858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x38185c: 0x70852b89  pcpyld      $a1, $a0, $a1
    ctx->pc = 0x38185cu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x381860: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x381860u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x381864: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x381864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x381868: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x381868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x38186c: 0x9c450008  lwu         $a1, 0x8($v0)
    ctx->pc = 0x38186cu;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x381870: 0x9c420004  lwu         $v0, 0x4($v0)
    ctx->pc = 0x381870u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x381874: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x381874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x381878: 0x9e060010  lwu         $a2, 0x10($s0)
    ctx->pc = 0x381878u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x38187c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x38187cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x381880: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x381880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x381884: 0xc22825  or          $a1, $a2, $v0
    ctx->pc = 0x381884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x381888: 0x70852b89  pcpyld      $a1, $a0, $a1
    ctx->pc = 0x381888u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x38188c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x38188cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x381890: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x381890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x381894: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x381894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x381898: 0x9c450008  lwu         $a1, 0x8($v0)
    ctx->pc = 0x381898u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x38189c: 0x9c420004  lwu         $v0, 0x4($v0)
    ctx->pc = 0x38189cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3818a0: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x3818a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3818a4: 0x9e060020  lwu         $a2, 0x20($s0)
    ctx->pc = 0x3818a4u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3818a8: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x3818a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3818ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3818acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3818b0: 0xc22825  or          $a1, $a2, $v0
    ctx->pc = 0x3818b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3818b4: 0x70852b89  pcpyld      $a1, $a0, $a1
    ctx->pc = 0x3818b4u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x3818b8: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x3818b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x3818bc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3818bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3818c0: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x3818c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x3818c4: 0x9c450008  lwu         $a1, 0x8($v0)
    ctx->pc = 0x3818c4u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3818c8: 0x9c420004  lwu         $v0, 0x4($v0)
    ctx->pc = 0x3818c8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3818cc: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x3818ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3818d0: 0x9e060030  lwu         $a2, 0x30($s0)
    ctx->pc = 0x3818d0u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3818d4: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x3818d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3818d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3818d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3818dc: 0xc22825  or          $a1, $a2, $v0
    ctx->pc = 0x3818dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3818e0: 0x70852b89  pcpyld      $a1, $a0, $a1
    ctx->pc = 0x3818e0u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x3818e4: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x3818e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x3818e8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3818e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3818ec: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x3818ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x3818f0: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x3818f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x3818f4: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x3818F4u;
    {
        const bool branch_taken_0x3818f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3818F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3818F4u;
        // 0x3818f8: 0x26950028  addiu       $s5, $s4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3818f4) {
            ctx->pc = 0x3819ECu;
            goto label_3819ec;
        }
    }
    ctx->pc = 0x3818FCu;
    // 0x3818fc: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x3818fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x381900: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x381900u;
    {
        const bool branch_taken_0x381900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381900u;
        // 0x381904: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381900) {
            ctx->pc = 0x3819ECu;
            goto label_3819ec;
        }
    }
    ctx->pc = 0x381908u;
    // 0x381908: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x381908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38190c: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x38190cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_381910:
    // 0x381910: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x381910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x381914: 0x24b30001  addiu       $s3, $a1, 0x1
    ctx->pc = 0x381914u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x381918: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x381918u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x38191c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x38191cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x381920: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x381920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x381924: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x381924u;
    {
        const bool branch_taken_0x381924 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x381924) {
            ctx->pc = 0x381928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381924u;
            // 0x381928: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381948u;
            goto label_381948;
        }
    }
    ctx->pc = 0x38192Cu;
    // 0x38192c: 0xae40c4c0  sw          $zero, -0x3B40($s2)
    ctx->pc = 0x38192cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294952128), GPR_U32(ctx, 0));
    // 0x381930: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x381930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x381934: 0x8ca4006c  lw          $a0, 0x6C($a1)
    ctx->pc = 0x381934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x381938: 0xc111718  jal         func_445C60
    ctx->pc = 0x381938u;
    SET_GPR_U32(ctx, 31, 0x381940u);
    ctx->pc = 0x38193Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381938u;
    // 0x38193c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C60u, 0x381938u, 0x381940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381940u;
label_381940:
    // 0x381940: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x381940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x381944: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x381944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_381948:
    // 0x381948: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x381948u;
    {
        const bool branch_taken_0x381948 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x38194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381948u;
        // 0x38194c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381948) {
            ctx->pc = 0x381968u;
            goto label_381968;
        }
    }
    ctx->pc = 0x381950u;
    // 0x381950: 0xae43c4c0  sw          $v1, -0x3B40($s2)
    ctx->pc = 0x381950u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294952128), GPR_U32(ctx, 3));
    // 0x381954: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x381954u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x381958: 0x8ca4006c  lw          $a0, 0x6C($a1)
    ctx->pc = 0x381958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x38195c: 0xc111718  jal         func_445C60
    ctx->pc = 0x38195Cu;
    SET_GPR_U32(ctx, 31, 0x381964u);
    ctx->pc = 0x381960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38195Cu;
    // 0x381960: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C60u, 0x38195Cu, 0x381964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381964u;
label_381964:
    // 0x381964: 0x0  nop
    ctx->pc = 0x381964u;
    // NOP
label_381968:
    // 0x381968: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x381968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x38196c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x38196cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x381970: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x381970u;
    {
        const bool branch_taken_0x381970 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x381974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381970u;
        // 0x381974: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381970) {
            ctx->pc = 0x381990u;
            goto label_381990;
        }
    }
    ctx->pc = 0x381978u;
    // 0x381978: 0xae43c4c0  sw          $v1, -0x3B40($s2)
    ctx->pc = 0x381978u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294952128), GPR_U32(ctx, 3));
    // 0x38197c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x38197cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x381980: 0x8ca4006c  lw          $a0, 0x6C($a1)
    ctx->pc = 0x381980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x381984: 0xc111718  jal         func_445C60
    ctx->pc = 0x381984u;
    SET_GPR_U32(ctx, 31, 0x38198Cu);
    ctx->pc = 0x381988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381984u;
    // 0x381988: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C60u, 0x381984u, 0x38198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38198Cu;
label_38198c:
    // 0x38198c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x38198cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_381990:
    // 0x381990: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x381990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x381994: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x381994u;
    {
        const bool branch_taken_0x381994 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x381998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381994u;
        // 0x381998: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381994) {
            ctx->pc = 0x3819B0u;
            goto label_3819b0;
        }
    }
    ctx->pc = 0x38199Cu;
    // 0x38199c: 0xae43c4c0  sw          $v1, -0x3B40($s2)
    ctx->pc = 0x38199cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294952128), GPR_U32(ctx, 3));
    // 0x3819a0: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x3819a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x3819a4: 0x8ca4006c  lw          $a0, 0x6C($a1)
    ctx->pc = 0x3819a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x3819a8: 0xc111718  jal         func_445C60
    ctx->pc = 0x3819A8u;
    SET_GPR_U32(ctx, 31, 0x3819B0u);
    ctx->pc = 0x3819ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3819A8u;
    // 0x3819ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C60u, 0x3819A8u, 0x3819B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3819B0u;
label_3819b0:
    // 0x3819b0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3819b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3819b4: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x3819b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3819b8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3819B8u;
    {
        const bool branch_taken_0x3819b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3819BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3819B8u;
        // 0x3819bc: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3819b8) {
            ctx->pc = 0x3819D8u;
            goto label_3819d8;
        }
    }
    ctx->pc = 0x3819C0u;
    // 0x3819c0: 0xae43c4c0  sw          $v1, -0x3B40($s2)
    ctx->pc = 0x3819c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294952128), GPR_U32(ctx, 3));
    // 0x3819c4: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x3819c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x3819c8: 0x8ca4006c  lw          $a0, 0x6C($a1)
    ctx->pc = 0x3819c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x3819cc: 0xc111718  jal         func_445C60
    ctx->pc = 0x3819CCu;
    SET_GPR_U32(ctx, 31, 0x3819D4u);
    ctx->pc = 0x3819D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3819CCu;
    // 0x3819d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C60u, 0x3819CCu, 0x3819D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3819D4u;
label_3819d4:
    // 0x3819d4: 0x0  nop
    ctx->pc = 0x3819d4u;
    // NOP
label_3819d8:
    // 0x3819d8: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x3819d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x3819dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3819dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3819e0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x3819e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3819e4: 0x5440ffca  bnel        $v0, $zero, . + 4 + (-0x36 << 2)
    ctx->pc = 0x3819E4u;
    {
        const bool branch_taken_0x3819e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3819e4) {
            ctx->pc = 0x3819E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3819E4u;
            // 0x3819e8: 0x8ea40008  lw          $a0, 0x8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_381910;
        }
    }
    ctx->pc = 0x3819ECu;
label_3819ec:
    // 0x3819ec: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3819ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x3819f0: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x3819F0u;
    {
        const bool branch_taken_0x3819f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3819F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3819F0u;
        // 0x3819f4: 0x2695001c  addiu       $s5, $s4, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3819f0) {
            ctx->pc = 0x381AECu;
            goto label_381aec;
        }
    }
    ctx->pc = 0x3819F8u;
    // 0x3819f8: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x3819f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x3819fc: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x3819FCu;
    {
        const bool branch_taken_0x3819fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3819FCu;
        // 0x381a00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3819fc) {
            ctx->pc = 0x381AECu;
            goto label_381aec;
        }
    }
    ctx->pc = 0x381A04u;
    // 0x381a04: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x381a04u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
    // 0x381a08: 0x2632c4c0  addiu       $s2, $s1, -0x3B40
    ctx->pc = 0x381a08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952128));
    // 0x381a0c: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x381a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_381a10:
    // 0x381a10: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x381a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x381a14: 0x24b30001  addiu       $s3, $a1, 0x1
    ctx->pc = 0x381a14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x381a18: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x381a18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x381a1c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x381a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x381a20: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x381a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x381a24: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x381A24u;
    {
        const bool branch_taken_0x381a24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x381a24) {
            ctx->pc = 0x381A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381A24u;
            // 0x381a28: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381A48u;
            goto label_381a48;
        }
    }
    ctx->pc = 0x381A2Cu;
    // 0x381a2c: 0xae20c4c0  sw          $zero, -0x3B40($s1)
    ctx->pc = 0x381a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952128), GPR_U32(ctx, 0));
    // 0x381a30: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x381a30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x381a34: 0x8ca4006c  lw          $a0, 0x6C($a1)
    ctx->pc = 0x381a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x381a38: 0xc111718  jal         func_445C60
    ctx->pc = 0x381A38u;
    SET_GPR_U32(ctx, 31, 0x381A40u);
    ctx->pc = 0x381A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381A38u;
    // 0x381a3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C60u, 0x381A38u, 0x381A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381A40u;
label_381a40:
    // 0x381a40: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x381a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x381a44: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x381a44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_381a48:
    // 0x381a48: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x381A48u;
    {
        const bool branch_taken_0x381a48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x381A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381A48u;
        // 0x381a4c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381a48) {
            ctx->pc = 0x381A68u;
            goto label_381a68;
        }
    }
    ctx->pc = 0x381A50u;
    // 0x381a50: 0xae23c4c0  sw          $v1, -0x3B40($s1)
    ctx->pc = 0x381a50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952128), GPR_U32(ctx, 3));
    // 0x381a54: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x381a54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x381a58: 0x8ca4006c  lw          $a0, 0x6C($a1)
    ctx->pc = 0x381a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x381a5c: 0xc111718  jal         func_445C60
    ctx->pc = 0x381A5Cu;
    SET_GPR_U32(ctx, 31, 0x381A64u);
    ctx->pc = 0x381A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381A5Cu;
    // 0x381a60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C60u, 0x381A5Cu, 0x381A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381A64u;
label_381a64:
    // 0x381a64: 0x0  nop
    ctx->pc = 0x381a64u;
    // NOP
label_381a68:
    // 0x381a68: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x381a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x381a6c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x381a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x381a70: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x381A70u;
    {
        const bool branch_taken_0x381a70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x381A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381A70u;
        // 0x381a74: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381a70) {
            ctx->pc = 0x381A90u;
            goto label_381a90;
        }
    }
    ctx->pc = 0x381A78u;
    // 0x381a78: 0xae23c4c0  sw          $v1, -0x3B40($s1)
    ctx->pc = 0x381a78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952128), GPR_U32(ctx, 3));
    // 0x381a7c: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x381a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x381a80: 0x8ca4006c  lw          $a0, 0x6C($a1)
    ctx->pc = 0x381a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x381a84: 0xc111718  jal         func_445C60
    ctx->pc = 0x381A84u;
    SET_GPR_U32(ctx, 31, 0x381A8Cu);
    ctx->pc = 0x381A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381A84u;
    // 0x381a88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C60u, 0x381A84u, 0x381A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381A8Cu;
label_381a8c:
    // 0x381a8c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x381a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_381a90:
    // 0x381a90: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x381a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x381a94: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x381A94u;
    {
        const bool branch_taken_0x381a94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x381A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381A94u;
        // 0x381a98: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381a94) {
            ctx->pc = 0x381AB0u;
            goto label_381ab0;
        }
    }
    ctx->pc = 0x381A9Cu;
    // 0x381a9c: 0xae23c4c0  sw          $v1, -0x3B40($s1)
    ctx->pc = 0x381a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952128), GPR_U32(ctx, 3));
    // 0x381aa0: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x381aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x381aa4: 0x8ca4006c  lw          $a0, 0x6C($a1)
    ctx->pc = 0x381aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x381aa8: 0xc111718  jal         func_445C60
    ctx->pc = 0x381AA8u;
    SET_GPR_U32(ctx, 31, 0x381AB0u);
    ctx->pc = 0x381AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381AA8u;
    // 0x381aac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C60u, 0x381AA8u, 0x381AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381AB0u;
label_381ab0:
    // 0x381ab0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x381ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x381ab4: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x381ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x381ab8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x381AB8u;
    {
        const bool branch_taken_0x381ab8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x381ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381AB8u;
        // 0x381abc: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381ab8) {
            ctx->pc = 0x381AD8u;
            goto label_381ad8;
        }
    }
    ctx->pc = 0x381AC0u;
    // 0x381ac0: 0xae23c4c0  sw          $v1, -0x3B40($s1)
    ctx->pc = 0x381ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952128), GPR_U32(ctx, 3));
    // 0x381ac4: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x381ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x381ac8: 0x8ca4006c  lw          $a0, 0x6C($a1)
    ctx->pc = 0x381ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x381acc: 0xc111718  jal         func_445C60
    ctx->pc = 0x381ACCu;
    SET_GPR_U32(ctx, 31, 0x381AD4u);
    ctx->pc = 0x381AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381ACCu;
    // 0x381ad0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C60u, 0x381ACCu, 0x381AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381AD4u;
label_381ad4:
    // 0x381ad4: 0x0  nop
    ctx->pc = 0x381ad4u;
    // NOP
label_381ad8:
    // 0x381ad8: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x381ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x381adc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x381adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381ae0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x381ae0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x381ae4: 0x5440ffca  bnel        $v0, $zero, . + 4 + (-0x36 << 2)
    ctx->pc = 0x381AE4u;
    {
        const bool branch_taken_0x381ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x381ae4) {
            ctx->pc = 0x381AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381AE4u;
            // 0x381ae8: 0x8ea40008  lw          $a0, 0x8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_381a10;
        }
    }
    ctx->pc = 0x381AECu;
label_381aec:
    // 0x381aec: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x381aecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381af0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x381af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x381af4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x381af4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x381af8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x381af8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x381afc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x381afcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x381b00: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x381b00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x381b04: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x381b04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x381b08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x381b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x381b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x381B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381B0Cu;
        // 0x381b10: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381B14u;
    // 0x381b14: 0x0  nop
    ctx->pc = 0x381b14u;
    // NOP
    ctx->pc = 0x381b18u;
}
