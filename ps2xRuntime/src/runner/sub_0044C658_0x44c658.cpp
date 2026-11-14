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

// Function: sub_0044C658
// Address: 0x44c658 - 0x44c7f0
void sub_0044C658_0x44c658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044C658_0x44c658");
#endif

    switch (ctx->pc) {
        case 0x44c658u: goto label_44c658;
        case 0x44c65cu: goto label_44c65c;
        case 0x44c660u: goto label_44c660;
        case 0x44c664u: goto label_44c664;
        case 0x44c668u: goto label_44c668;
        case 0x44c66cu: goto label_44c66c;
        case 0x44c670u: goto label_44c670;
        case 0x44c674u: goto label_44c674;
        case 0x44c678u: goto label_44c678;
        case 0x44c67cu: goto label_44c67c;
        case 0x44c680u: goto label_44c680;
        case 0x44c684u: goto label_44c684;
        case 0x44c688u: goto label_44c688;
        case 0x44c68cu: goto label_44c68c;
        case 0x44c690u: goto label_44c690;
        case 0x44c694u: goto label_44c694;
        case 0x44c698u: goto label_44c698;
        case 0x44c69cu: goto label_44c69c;
        case 0x44c6a0u: goto label_44c6a0;
        case 0x44c6a4u: goto label_44c6a4;
        case 0x44c6a8u: goto label_44c6a8;
        case 0x44c6acu: goto label_44c6ac;
        case 0x44c6b0u: goto label_44c6b0;
        case 0x44c6b4u: goto label_44c6b4;
        case 0x44c6b8u: goto label_44c6b8;
        case 0x44c6bcu: goto label_44c6bc;
        case 0x44c6c0u: goto label_44c6c0;
        case 0x44c6c4u: goto label_44c6c4;
        case 0x44c6c8u: goto label_44c6c8;
        case 0x44c6ccu: goto label_44c6cc;
        case 0x44c6d0u: goto label_44c6d0;
        case 0x44c6d4u: goto label_44c6d4;
        case 0x44c6d8u: goto label_44c6d8;
        case 0x44c6dcu: goto label_44c6dc;
        case 0x44c6e0u: goto label_44c6e0;
        case 0x44c6e4u: goto label_44c6e4;
        case 0x44c6e8u: goto label_44c6e8;
        case 0x44c6ecu: goto label_44c6ec;
        case 0x44c6f0u: goto label_44c6f0;
        case 0x44c6f4u: goto label_44c6f4;
        case 0x44c6f8u: goto label_44c6f8;
        case 0x44c6fcu: goto label_44c6fc;
        case 0x44c700u: goto label_44c700;
        case 0x44c704u: goto label_44c704;
        case 0x44c708u: goto label_44c708;
        case 0x44c70cu: goto label_44c70c;
        case 0x44c710u: goto label_44c710;
        case 0x44c714u: goto label_44c714;
        case 0x44c718u: goto label_44c718;
        case 0x44c71cu: goto label_44c71c;
        case 0x44c720u: goto label_44c720;
        case 0x44c724u: goto label_44c724;
        case 0x44c728u: goto label_44c728;
        case 0x44c72cu: goto label_44c72c;
        case 0x44c730u: goto label_44c730;
        case 0x44c734u: goto label_44c734;
        case 0x44c738u: goto label_44c738;
        case 0x44c73cu: goto label_44c73c;
        case 0x44c740u: goto label_44c740;
        case 0x44c744u: goto label_44c744;
        case 0x44c748u: goto label_44c748;
        case 0x44c74cu: goto label_44c74c;
        case 0x44c750u: goto label_44c750;
        case 0x44c754u: goto label_44c754;
        case 0x44c758u: goto label_44c758;
        case 0x44c75cu: goto label_44c75c;
        case 0x44c760u: goto label_44c760;
        case 0x44c764u: goto label_44c764;
        case 0x44c768u: goto label_44c768;
        case 0x44c76cu: goto label_44c76c;
        case 0x44c770u: goto label_44c770;
        case 0x44c774u: goto label_44c774;
        case 0x44c778u: goto label_44c778;
        case 0x44c77cu: goto label_44c77c;
        case 0x44c780u: goto label_44c780;
        case 0x44c784u: goto label_44c784;
        case 0x44c788u: goto label_44c788;
        case 0x44c78cu: goto label_44c78c;
        case 0x44c790u: goto label_44c790;
        case 0x44c794u: goto label_44c794;
        case 0x44c798u: goto label_44c798;
        case 0x44c79cu: goto label_44c79c;
        case 0x44c7a0u: goto label_44c7a0;
        case 0x44c7a4u: goto label_44c7a4;
        case 0x44c7a8u: goto label_44c7a8;
        case 0x44c7acu: goto label_44c7ac;
        case 0x44c7b0u: goto label_44c7b0;
        case 0x44c7b4u: goto label_44c7b4;
        case 0x44c7b8u: goto label_44c7b8;
        case 0x44c7bcu: goto label_44c7bc;
        case 0x44c7c0u: goto label_44c7c0;
        case 0x44c7c4u: goto label_44c7c4;
        case 0x44c7c8u: goto label_44c7c8;
        case 0x44c7ccu: goto label_44c7cc;
        case 0x44c7d0u: goto label_44c7d0;
        case 0x44c7d4u: goto label_44c7d4;
        case 0x44c7d8u: goto label_44c7d8;
        case 0x44c7dcu: goto label_44c7dc;
        case 0x44c7e0u: goto label_44c7e0;
        case 0x44c7e4u: goto label_44c7e4;
        case 0x44c7e8u: goto label_44c7e8;
        case 0x44c7ecu: goto label_44c7ec;
        default: break;
    }

    ctx->pc = 0x44c658u;

label_44c658:
    // 0x44c658: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x44c658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_44c65c:
    // 0x44c65c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x44c65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_44c660:
    // 0x44c660: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x44c660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_44c664:
    // 0x44c664: 0x240303ff  addiu       $v1, $zero, 0x3FF
    ctx->pc = 0x44c664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_44c668:
    // 0x44c668: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x44c668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_44c66c:
    // 0x44c66c: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x44c66cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_44c670:
    // 0x44c670: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x44c670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_44c674:
    // 0x44c674: 0x24100400  addiu       $s0, $zero, 0x400
    ctx->pc = 0x44c674u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_44c678:
    // 0x44c678: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x44c678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_44c67c:
    // 0x44c67c: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x44c67cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_44c680:
    // 0x44c680: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x44c680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_44c684:
    // 0x44c684: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x44c684u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44c688:
    // 0x44c688: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44c688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_44c68c:
    // 0x44c68c: 0x83800b  movn        $s0, $a0, $v1
    ctx->pc = 0x44c68cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_44c690:
    // 0x44c690: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x44c690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_44c694:
    // 0x44c694: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x44c694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_44c698:
    // 0x44c698: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x44c698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_44c69c:
    // 0x44c69c: 0x40f809  jalr        $v0
label_44c6a0:
    if (ctx->pc == 0x44C6A0u) {
        ctx->pc = 0x44C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C69Cu;
        // 0x44c6a0: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C6A4u;
        goto label_44c6a4;
    }
    ctx->pc = 0x44C69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44C6A4u);
        ctx->pc = 0x44C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C69Cu;
        // 0x44c6a0: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44C69Cu, 0x44C6A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44C6A4u;
label_44c6a4:
    // 0x44c6a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x44c6a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44c6a8:
    // 0x44c6a8: 0x12200047  beqz        $s1, . + 4 + (0x47 << 2)
label_44c6ac:
    if (ctx->pc == 0x44C6ACu) {
        ctx->pc = 0x44C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C6A8u;
        // 0x44c6ac: 0x2403007f  addiu       $v1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C6B0u;
        goto label_44c6b0;
    }
    ctx->pc = 0x44C6A8u;
    {
        const bool branch_taken_0x44c6a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C6A8u;
        // 0x44c6ac: 0x2403007f  addiu       $v1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c6a8) {
            ctx->pc = 0x44C7C8u;
            goto label_44c7c8;
        }
    }
    ctx->pc = 0x44C6B0u;
label_44c6b0:
    // 0x44c6b0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x44c6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_44c6b4:
    // 0x44c6b4: 0x2604001f  addiu       $a0, $s0, 0x1F
    ctx->pc = 0x44c6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
label_44c6b8:
    // 0x44c6b8: 0x3442ffe0  ori         $v0, $v0, 0xFFE0
    ctx->pc = 0x44c6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65504);
label_44c6bc:
    // 0x44c6bc: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x44c6bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_44c6c0:
    // 0x44c6c0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x44c6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_44c6c4:
    // 0x44c6c4: 0x70182b  sltu        $v1, $v1, $s0
    ctx->pc = 0x44c6c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_44c6c8:
    // 0x44c6c8: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x44c6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_44c6cc:
    // 0x44c6cc: 0xa3800a  movz        $s0, $a1, $v1
    ctx->pc = 0x44c6ccu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
label_44c6d0:
    // 0x44c6d0: 0x3c050104  lui         $a1, 0x104
    ctx->pc = 0x44c6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)260 << 16));
label_44c6d4:
    // 0x44c6d4: 0x2604008b  addiu       $a0, $s0, 0x8B
    ctx->pc = 0x44c6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 139));
label_44c6d8:
    // 0x44c6d8: 0x40f809  jalr        $v0
label_44c6dc:
    if (ctx->pc == 0x44C6DCu) {
        ctx->pc = 0x44C6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C6D8u;
        // 0x44c6dc: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C6E0u;
        goto label_44c6e0;
    }
    ctx->pc = 0x44C6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44C6E0u);
        ctx->pc = 0x44C6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C6D8u;
        // 0x44c6dc: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44C6D8u, 0x44C6E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44C6E0u;
label_44c6e0:
    // 0x44c6e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x44c6e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44c6e4:
    // 0x44c6e4: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_44c6e8:
    if (ctx->pc == 0x44C6E8u) {
        ctx->pc = 0x44C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C6E4u;
        // 0x44c6e8: 0x2643008b  addiu       $v1, $s2, 0x8B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 139));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C6ECu;
        goto label_44c6ec;
    }
    ctx->pc = 0x44C6E4u;
    {
        const bool branch_taken_0x44c6e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C6E4u;
        // 0x44c6e8: 0x2643008b  addiu       $v1, $s2, 0x8B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 139));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c6e4) {
            ctx->pc = 0x44C704u;
            goto label_44c704;
        }
    }
    ctx->pc = 0x44C6ECu;
label_44c6ec:
    // 0x44c6ec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x44c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_44c6f0:
    // 0x44c6f0: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x44c6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
label_44c6f4:
    // 0x44c6f4: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x44c6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_44c6f8:
    // 0x44c6f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x44c6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_44c6fc:
    // 0x44c6fc: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x44c6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_44c700:
    // 0x44c700: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x44c700u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_44c704:
    // 0x44c704: 0x1240002c  beqz        $s2, . + 4 + (0x2C << 2)
label_44c708:
    if (ctx->pc == 0x44C708u) {
        ctx->pc = 0x44C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C704u;
        // 0x44c708: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C70Cu;
        goto label_44c70c;
    }
    ctx->pc = 0x44C704u;
    {
        const bool branch_taken_0x44c704 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C704u;
        // 0x44c708: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c704) {
            ctx->pc = 0x44C7B8u;
            goto label_44c7b8;
        }
    }
    ctx->pc = 0x44C70Cu;
label_44c70c:
    // 0x44c70c: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x44c70cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_44c710:
    // 0x44c710: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x44c710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_44c714:
    // 0x44c714: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x44c714u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44c718:
    // 0x44c718: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x44c718u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_44c71c:
    // 0x44c71c: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x44c71cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_44c720:
    // 0x44c720: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x44c720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_44c724:
    // 0x44c724: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x44c724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_44c728:
    // 0x44c728: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_44c72c:
    if (ctx->pc == 0x44C72Cu) {
        ctx->pc = 0x44C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C728u;
        // 0x44c72c: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C730u;
        goto label_44c730;
    }
    ctx->pc = 0x44C728u;
    {
        const bool branch_taken_0x44c728 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C728u;
        // 0x44c72c: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c728) {
            ctx->pc = 0x44C768u;
            goto label_44c768;
        }
    }
    ctx->pc = 0x44C730u;
label_44c730:
    // 0x44c730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44c734:
    // 0x44c734: 0x0  nop
    ctx->pc = 0x44c734u;
    // NOP
label_44c738:
    // 0x44c738: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x44c738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_44c73c:
    // 0x44c73c: 0xc112e3a  jal         func_44B8E8
label_44c740:
    if (ctx->pc == 0x44C740u) {
        ctx->pc = 0x44C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C73Cu;
        // 0x44c740: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C744u;
        goto label_44c744;
    }
    ctx->pc = 0x44C73Cu;
    SET_GPR_U32(ctx, 31, 0x44C744u);
    ctx->pc = 0x44C740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C73Cu;
    // 0x44c740: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44B8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44B8E8u, 0x44C73Cu, 0x44C744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C744u;
label_44c744:
    // 0x44c744: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_44c748:
    if (ctx->pc == 0x44C748u) {
        ctx->pc = 0x44C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C744u;
        // 0x44c748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C74Cu;
        goto label_44c74c;
    }
    ctx->pc = 0x44C744u;
    {
        const bool branch_taken_0x44c744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C744u;
        // 0x44c748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c744) {
            ctx->pc = 0x44C79Cu;
            goto label_44c79c;
        }
    }
    ctx->pc = 0x44C74Cu;
label_44c74c:
    // 0x44c74c: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_44c750:
    if (ctx->pc == 0x44C750u) {
        ctx->pc = 0x44C750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C74Cu;
        // 0x44c750: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C754u;
        goto label_44c754;
    }
    ctx->pc = 0x44C74Cu;
    {
        const bool branch_taken_0x44c74c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x44C750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C74Cu;
        // 0x44c750: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c74c) {
            ctx->pc = 0x44C75Cu;
            goto label_44c75c;
        }
    }
    ctx->pc = 0x44C754u;
label_44c754:
    // 0x44c754: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x44c754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44c758:
    // 0x44c758: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x44c758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_44c75c:
    // 0x44c75c: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x44c75cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_44c760:
    // 0x44c760: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
label_44c764:
    if (ctx->pc == 0x44C764u) {
        ctx->pc = 0x44C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C760u;
        // 0x44c764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C768u;
        goto label_44c768;
    }
    ctx->pc = 0x44C760u;
    {
        const bool branch_taken_0x44c760 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x44C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C760u;
        // 0x44c764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c760) {
            ctx->pc = 0x44C738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44c738;
        }
    }
    ctx->pc = 0x44C768u;
label_44c768:
    // 0x44c768: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x44c768u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_44c76c:
    // 0x44c76c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x44c76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_44c770:
    // 0x44c770: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x44c770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44c774:
    // 0x44c774: 0xc112e3a  jal         func_44B8E8
label_44c778:
    if (ctx->pc == 0x44C778u) {
        ctx->pc = 0x44C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C774u;
        // 0x44c778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C77Cu;
        goto label_44c77c;
    }
    ctx->pc = 0x44C774u;
    SET_GPR_U32(ctx, 31, 0x44C77Cu);
    ctx->pc = 0x44C778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C774u;
    // 0x44c778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44B8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44B8E8u, 0x44C774u, 0x44C77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C77Cu;
label_44c77c:
    // 0x44c77c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_44c780:
    if (ctx->pc == 0x44C780u) {
        ctx->pc = 0x44C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C77Cu;
        // 0x44c780: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C784u;
        goto label_44c784;
    }
    ctx->pc = 0x44C77Cu;
    {
        const bool branch_taken_0x44c77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C77Cu;
        // 0x44c780: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c77c) {
            ctx->pc = 0x44C79Cu;
            goto label_44c79c;
        }
    }
    ctx->pc = 0x44C784u;
label_44c784:
    // 0x44c784: 0x56600004  bnel        $s3, $zero, . + 4 + (0x4 << 2)
label_44c788:
    if (ctx->pc == 0x44C788u) {
        ctx->pc = 0x44C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C784u;
        // 0x44c788: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C78Cu;
        goto label_44c78c;
    }
    ctx->pc = 0x44C784u;
    {
        const bool branch_taken_0x44c784 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x44c784) {
            ctx->pc = 0x44C788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44C784u;
            // 0x44c788: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44C798u;
            goto label_44c798;
        }
    }
    ctx->pc = 0x44C78Cu;
label_44c78c:
    // 0x44c78c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x44c78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44c790:
    // 0x44c790: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x44c790u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_44c794:
    // 0x44c794: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x44c794u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_44c798:
    // 0x44c798: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44c798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44c79c:
    // 0x44c79c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_44c7a0:
    if (ctx->pc == 0x44C7A0u) {
        ctx->pc = 0x44C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C79Cu;
        // 0x44c7a0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C7A4u;
        goto label_44c7a4;
    }
    ctx->pc = 0x44C79Cu;
    {
        const bool branch_taken_0x44c79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C79Cu;
        // 0x44c7a0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c79c) {
            ctx->pc = 0x44C7CCu;
            goto label_44c7cc;
        }
    }
    ctx->pc = 0x44C7A4u;
label_44c7a4:
    // 0x44c7a4: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_44c7a8:
    if (ctx->pc == 0x44C7A8u) {
        ctx->pc = 0x44C7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C7A4u;
        // 0x44c7a8: 0x2683e880  addiu       $v1, $s4, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C7ACu;
        goto label_44c7ac;
    }
    ctx->pc = 0x44C7A4u;
    {
        const bool branch_taken_0x44c7a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C7A4u;
        // 0x44c7a8: 0x2683e880  addiu       $v1, $s4, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c7a4) {
            ctx->pc = 0x44C7B8u;
            goto label_44c7b8;
        }
    }
    ctx->pc = 0x44C7ACu;
label_44c7ac:
    // 0x44c7ac: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x44c7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_44c7b0:
    // 0x44c7b0: 0x40f809  jalr        $v0
label_44c7b4:
    if (ctx->pc == 0x44C7B4u) {
        ctx->pc = 0x44C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C7B0u;
        // 0x44c7b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C7B8u;
        goto label_44c7b8;
    }
    ctx->pc = 0x44C7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44C7B8u);
        ctx->pc = 0x44C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C7B0u;
        // 0x44c7b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44C7B0u, 0x44C7B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44C7B8u;
label_44c7b8:
    // 0x44c7b8: 0x2683e880  addiu       $v1, $s4, -0x1780
    ctx->pc = 0x44c7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961280));
label_44c7bc:
    // 0x44c7bc: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x44c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_44c7c0:
    // 0x44c7c0: 0x40f809  jalr        $v0
label_44c7c4:
    if (ctx->pc == 0x44C7C4u) {
        ctx->pc = 0x44C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C7C0u;
        // 0x44c7c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C7C8u;
        goto label_44c7c8;
    }
    ctx->pc = 0x44C7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44C7C8u);
        ctx->pc = 0x44C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C7C0u;
        // 0x44c7c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44C7C0u, 0x44C7C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44C7C8u;
label_44c7c8:
    // 0x44c7c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x44c7c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44c7cc:
    // 0x44c7cc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x44c7ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_44c7d0:
    // 0x44c7d0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x44c7d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_44c7d4:
    // 0x44c7d4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x44c7d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44c7d8:
    // 0x44c7d8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x44c7d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44c7dc:
    // 0x44c7dc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x44c7dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44c7e0:
    // 0x44c7e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44c7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44c7e4:
    // 0x44c7e4: 0x3e00008  jr          $ra
label_44c7e8:
    if (ctx->pc == 0x44C7E8u) {
        ctx->pc = 0x44C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C7E4u;
        // 0x44c7e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C7ECu;
        goto label_44c7ec;
    }
    ctx->pc = 0x44C7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C7E4u;
        // 0x44c7e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44C7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44C7ECu;
label_44c7ec:
    // 0x44c7ec: 0x0  nop
    ctx->pc = 0x44c7ecu;
    // NOP
    ctx->pc = 0x44c7f0u;
}
