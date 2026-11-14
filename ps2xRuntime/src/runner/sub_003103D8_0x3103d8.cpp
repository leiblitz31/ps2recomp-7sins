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

// Function: sub_003103D8
// Address: 0x3103d8 - 0x310518
void sub_003103D8_0x3103d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003103D8_0x3103d8");
#endif

    switch (ctx->pc) {
        case 0x310418u: goto label_310418;
        case 0x310428u: goto label_310428;
        case 0x310438u: goto label_310438;
        case 0x310450u: goto label_310450;
        case 0x3104d0u: goto label_3104d0;
        case 0x3104f4u: goto label_3104f4;
        default: break;
    }

    ctx->pc = 0x3103d8u;

    // 0x3103d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3103d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3103dc: 0x24030334  addiu       $v1, $zero, 0x334
    ctx->pc = 0x3103dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
    // 0x3103e0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x3103e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x3103e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3103e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3103e8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3103e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3103ec: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x3103ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3103f0: 0x3c120061  lui         $s2, 0x61
    ctx->pc = 0x3103f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)97 << 16));
    // 0x3103f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3103f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3103f8: 0x26427e40  addiu       $v0, $s2, 0x7E40
    ctx->pc = 0x3103f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32320));
    // 0x3103fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3103fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x310400: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x310400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x310404: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x310404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x310408: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x310408u;
    {
        const bool branch_taken_0x310408 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x310408) {
            ctx->pc = 0x310420u;
            goto label_310420;
        }
    }
    ctx->pc = 0x310410u;
    // 0x310410: 0xc0c419c  jal         func_310670
    ctx->pc = 0x310410u;
    SET_GPR_U32(ctx, 31, 0x310418u);
    ctx->pc = 0x310414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310410u;
    // 0x310414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310670u, 0x310410u, 0x310418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310418u;
label_310418:
    // 0x310418: 0x4400039  bltz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x310418u;
    {
        const bool branch_taken_0x310418 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x31041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310418u;
        // 0x31041c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310418) {
            ctx->pc = 0x310500u;
            goto label_310500;
        }
    }
    ctx->pc = 0x310420u;
label_310420:
    // 0x310420: 0xc0c41e6  jal         func_310798
    ctx->pc = 0x310420u;
    SET_GPR_U32(ctx, 31, 0x310428u);
    ctx->pc = 0x310424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310420u;
    // 0x310424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310798u, 0x310420u, 0x310428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310428u;
label_310428:
    // 0x310428: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x310428u;
    {
        const bool branch_taken_0x310428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310428u;
        // 0x31042c: 0x2402c000  addiu       $v0, $zero, -0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310428) {
            ctx->pc = 0x310464u;
            goto label_310464;
        }
    }
    ctx->pc = 0x310430u;
    // 0x310430: 0xc0c41cc  jal         func_310730
    ctx->pc = 0x310430u;
    SET_GPR_U32(ctx, 31, 0x310438u);
    ctx->pc = 0x310434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310430u;
    // 0x310434: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310730u, 0x310430u, 0x310438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310438u;
label_310438:
    // 0x310438: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x310438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31043c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x31043cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x310440: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x310440u;
    {
        const bool branch_taken_0x310440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x310440) {
            ctx->pc = 0x310444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310440u;
            // 0x310444: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31045Cu;
            goto label_31045c;
        }
    }
    ctx->pc = 0x310448u;
    // 0x310448: 0xc0c419c  jal         func_310670
    ctx->pc = 0x310448u;
    SET_GPR_U32(ctx, 31, 0x310450u);
    ctx->pc = 0x31044Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310448u;
    // 0x31044c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310670u, 0x310448u, 0x310450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310450u;
label_310450:
    // 0x310450: 0x4400022  bltz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x310450u;
    {
        const bool branch_taken_0x310450 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x310454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310450u;
        // 0x310454: 0x24020334  addiu       $v0, $zero, 0x334 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310450) {
            ctx->pc = 0x3104DCu;
            goto label_3104dc;
        }
    }
    ctx->pc = 0x310458u;
    // 0x310458: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x310458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_31045c:
    // 0x31045c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x31045Cu;
    {
        const bool branch_taken_0x31045c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31045Cu;
        // 0x310460: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31045c) {
            ctx->pc = 0x3104FCu;
            goto label_3104fc;
        }
    }
    ctx->pc = 0x310464u;
label_310464:
    // 0x310464: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x310464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x310468: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x310468u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x31046c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x31046cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x310470: 0x34843fff  ori         $a0, $a0, 0x3FFF
    ctx->pc = 0x310470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16383);
    // 0x310474: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x310474u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x310478: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x310478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x31047c: 0x2048024  and         $s0, $s0, $a0
    ctx->pc = 0x31047cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x310480: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x310480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x310484: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x310484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x310488: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x310488u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x31048c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31048cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x310490: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x310490u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x310494: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x310494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x310498: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x310498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31049c: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x31049cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x3104a0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3104a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3104a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3104a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3104a8: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x3104a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x3104ac: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x3104acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x3104b0: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x3104b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3104b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3104b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3104b8: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x3104b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x3104bc: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x3104bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x3104c0: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x3104c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3104c4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x3104c4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x3104c8: 0xc0be260  jal         func_2F8980
    ctx->pc = 0x3104C8u;
    SET_GPR_U32(ctx, 31, 0x3104D0u);
    ctx->pc = 0x3104CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3104C8u;
    // 0x3104cc: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8980u, 0x3104C8u, 0x3104D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3104D0u;
label_3104d0:
    // 0x3104d0: 0x443000b  bgezl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3104D0u;
    {
        const bool branch_taken_0x3104d0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3104d0) {
            ctx->pc = 0x3104D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3104D0u;
            // 0x3104d4: 0x93a20000  lbu         $v0, 0x0($sp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310500u;
            goto label_310500;
        }
    }
    ctx->pc = 0x3104D8u;
    // 0x3104d8: 0x24020334  addiu       $v0, $zero, 0x334
    ctx->pc = 0x3104d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
label_3104dc:
    // 0x3104dc: 0x26437e40  addiu       $v1, $s2, 0x7E40
    ctx->pc = 0x3104dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32320));
    // 0x3104e0: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x3104e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3104e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3104e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3104e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3104e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3104ec: 0xc0c417e  jal         func_3105F8
    ctx->pc = 0x3104ECu;
    SET_GPR_U32(ctx, 31, 0x3104F4u);
    ctx->pc = 0x3104F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3104ECu;
    // 0x3104f0: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3105F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3105F8u, 0x3104ECu, 0x3104F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3104F4u;
label_3104f4:
    // 0x3104f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3104F4u;
    {
        const bool branch_taken_0x3104f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3104F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3104F4u;
        // 0x3104f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3104f4) {
            ctx->pc = 0x310500u;
            goto label_310500;
        }
    }
    ctx->pc = 0x3104FCu;
label_3104fc:
    // 0x3104fc: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x3104fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_310500:
    // 0x310500: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x310500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x310504: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x310504u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x310508: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x310508u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31050c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x31050cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x310510: 0x3e00008  jr          $ra
    ctx->pc = 0x310510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310510u;
        // 0x310514: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310518u;
}
