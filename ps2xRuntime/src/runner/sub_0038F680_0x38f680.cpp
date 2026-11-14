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

// Function: sub_0038F680
// Address: 0x38f680 - 0x38f7c8
void sub_0038F680_0x38f680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F680_0x38f680");
#endif

    switch (ctx->pc) {
        case 0x38f680u: goto label_38f680;
        case 0x38f684u: goto label_38f684;
        case 0x38f688u: goto label_38f688;
        case 0x38f68cu: goto label_38f68c;
        case 0x38f690u: goto label_38f690;
        case 0x38f694u: goto label_38f694;
        case 0x38f698u: goto label_38f698;
        case 0x38f69cu: goto label_38f69c;
        case 0x38f6a0u: goto label_38f6a0;
        case 0x38f6a4u: goto label_38f6a4;
        case 0x38f6a8u: goto label_38f6a8;
        case 0x38f6acu: goto label_38f6ac;
        case 0x38f6b0u: goto label_38f6b0;
        case 0x38f6b4u: goto label_38f6b4;
        case 0x38f6b8u: goto label_38f6b8;
        case 0x38f6bcu: goto label_38f6bc;
        case 0x38f6c0u: goto label_38f6c0;
        case 0x38f6c4u: goto label_38f6c4;
        case 0x38f6c8u: goto label_38f6c8;
        case 0x38f6ccu: goto label_38f6cc;
        case 0x38f6d0u: goto label_38f6d0;
        case 0x38f6d4u: goto label_38f6d4;
        case 0x38f6d8u: goto label_38f6d8;
        case 0x38f6dcu: goto label_38f6dc;
        case 0x38f6e0u: goto label_38f6e0;
        case 0x38f6e4u: goto label_38f6e4;
        case 0x38f6e8u: goto label_38f6e8;
        case 0x38f6ecu: goto label_38f6ec;
        case 0x38f6f0u: goto label_38f6f0;
        case 0x38f6f4u: goto label_38f6f4;
        case 0x38f6f8u: goto label_38f6f8;
        case 0x38f6fcu: goto label_38f6fc;
        case 0x38f700u: goto label_38f700;
        case 0x38f704u: goto label_38f704;
        case 0x38f708u: goto label_38f708;
        case 0x38f70cu: goto label_38f70c;
        case 0x38f710u: goto label_38f710;
        case 0x38f714u: goto label_38f714;
        case 0x38f718u: goto label_38f718;
        case 0x38f71cu: goto label_38f71c;
        case 0x38f720u: goto label_38f720;
        case 0x38f724u: goto label_38f724;
        case 0x38f728u: goto label_38f728;
        case 0x38f72cu: goto label_38f72c;
        case 0x38f730u: goto label_38f730;
        case 0x38f734u: goto label_38f734;
        case 0x38f738u: goto label_38f738;
        case 0x38f73cu: goto label_38f73c;
        case 0x38f740u: goto label_38f740;
        case 0x38f744u: goto label_38f744;
        case 0x38f748u: goto label_38f748;
        case 0x38f74cu: goto label_38f74c;
        case 0x38f750u: goto label_38f750;
        case 0x38f754u: goto label_38f754;
        case 0x38f758u: goto label_38f758;
        case 0x38f75cu: goto label_38f75c;
        case 0x38f760u: goto label_38f760;
        case 0x38f764u: goto label_38f764;
        case 0x38f768u: goto label_38f768;
        case 0x38f76cu: goto label_38f76c;
        case 0x38f770u: goto label_38f770;
        case 0x38f774u: goto label_38f774;
        case 0x38f778u: goto label_38f778;
        case 0x38f77cu: goto label_38f77c;
        case 0x38f780u: goto label_38f780;
        case 0x38f784u: goto label_38f784;
        case 0x38f788u: goto label_38f788;
        case 0x38f78cu: goto label_38f78c;
        case 0x38f790u: goto label_38f790;
        case 0x38f794u: goto label_38f794;
        case 0x38f798u: goto label_38f798;
        case 0x38f79cu: goto label_38f79c;
        case 0x38f7a0u: goto label_38f7a0;
        case 0x38f7a4u: goto label_38f7a4;
        case 0x38f7a8u: goto label_38f7a8;
        case 0x38f7acu: goto label_38f7ac;
        case 0x38f7b0u: goto label_38f7b0;
        case 0x38f7b4u: goto label_38f7b4;
        case 0x38f7b8u: goto label_38f7b8;
        case 0x38f7bcu: goto label_38f7bc;
        case 0x38f7c0u: goto label_38f7c0;
        case 0x38f7c4u: goto label_38f7c4;
        default: break;
    }

    ctx->pc = 0x38f680u;

label_38f680:
    // 0x38f680: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38f680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_38f684:
    // 0x38f684: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x38f684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_38f688:
    // 0x38f688: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x38f688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_38f68c:
    // 0x38f68c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x38f68cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38f690:
    // 0x38f690: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x38f690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_38f694:
    // 0x38f694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38f694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38f698:
    // 0x38f698: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38f698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_38f69c:
    // 0x38f69c: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x38f69cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_38f6a0:
    // 0x38f6a0: 0x12400033  beqz        $s2, . + 4 + (0x33 << 2)
label_38f6a4:
    if (ctx->pc == 0x38F6A4u) {
        ctx->pc = 0x38F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F6A0u;
        // 0x38f6a4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F6A8u;
        goto label_38f6a8;
    }
    ctx->pc = 0x38F6A0u;
    {
        const bool branch_taken_0x38f6a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F6A0u;
        // 0x38f6a4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f6a0) {
            ctx->pc = 0x38F770u;
            goto label_38f770;
        }
    }
    ctx->pc = 0x38F6A8u;
label_38f6a8:
    // 0x38f6a8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x38f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_38f6ac:
    // 0x38f6ac: 0x18400029  blez        $v0, . + 4 + (0x29 << 2)
label_38f6b0:
    if (ctx->pc == 0x38F6B0u) {
        ctx->pc = 0x38F6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F6ACu;
        // 0x38f6b0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F6B4u;
        goto label_38f6b4;
    }
    ctx->pc = 0x38F6ACu;
    {
        const bool branch_taken_0x38f6ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x38F6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F6ACu;
        // 0x38f6b0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f6ac) {
            ctx->pc = 0x38F754u;
            goto label_38f754;
        }
    }
    ctx->pc = 0x38F6B4u;
label_38f6b4:
    // 0x38f6b4: 0x111023  negu        $v0, $s1
    ctx->pc = 0x38f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_38f6b8:
    // 0x38f6b8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x38f6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_38f6bc:
    // 0x38f6bc: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_38f6c0:
    if (ctx->pc == 0x38F6C0u) {
        ctx->pc = 0x38F6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F6BCu;
        // 0x38f6c0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F6C4u;
        goto label_38f6c4;
    }
    ctx->pc = 0x38F6BCu;
    {
        const bool branch_taken_0x38f6bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F6BCu;
        // 0x38f6c0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f6bc) {
            ctx->pc = 0x38F718u;
            goto label_38f718;
        }
    }
    ctx->pc = 0x38F6C4u;
label_38f6c4:
    // 0x38f6c4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x38f6c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_38f6c8:
    // 0x38f6c8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_38f6cc:
    if (ctx->pc == 0x38F6CCu) {
        ctx->pc = 0x38F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F6C8u;
        // 0x38f6cc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F6D0u;
        goto label_38f6d0;
    }
    ctx->pc = 0x38F6C8u;
    {
        const bool branch_taken_0x38f6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F6C8u;
        // 0x38f6cc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f6c8) {
            ctx->pc = 0x38F700u;
            goto label_38f700;
        }
    }
    ctx->pc = 0x38F6D0u;
label_38f6d0:
    // 0x38f6d0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_38f6d4:
    if (ctx->pc == 0x38F6D4u) {
        ctx->pc = 0x38F6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F6D0u;
        // 0x38f6d4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F6D8u;
        goto label_38f6d8;
    }
    ctx->pc = 0x38F6D0u;
    {
        const bool branch_taken_0x38f6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f6d0) {
            ctx->pc = 0x38F6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F6D0u;
            // 0x38f6d4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F6F0u;
            goto label_38f6f0;
        }
    }
    ctx->pc = 0x38F6D8u;
label_38f6d8:
    // 0x38f6d8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x38f6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38f6dc:
    // 0x38f6dc: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x38f6dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_38f6e0:
    // 0x38f6e0: 0xc0e39c0  jal         func_38E700
label_38f6e4:
    if (ctx->pc == 0x38F6E4u) {
        ctx->pc = 0x38F6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F6E0u;
        // 0x38f6e4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F6E8u;
        goto label_38f6e8;
    }
    ctx->pc = 0x38F6E0u;
    SET_GPR_U32(ctx, 31, 0x38F6E8u);
    ctx->pc = 0x38F6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F6E0u;
    // 0x38f6e4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F6E0u, 0x38F6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F6E8u;
label_38f6e8:
    // 0x38f6e8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x38f6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_38f6ec:
    // 0x38f6ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x38f6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38f6f0:
    // 0x38f6f0: 0xc0e39c0  jal         func_38E700
label_38f6f4:
    if (ctx->pc == 0x38F6F4u) {
        ctx->pc = 0x38F6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F6F0u;
        // 0x38f6f4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F6F8u;
        goto label_38f6f8;
    }
    ctx->pc = 0x38F6F0u;
    SET_GPR_U32(ctx, 31, 0x38F6F8u);
    ctx->pc = 0x38F6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F6F0u;
    // 0x38f6f4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F6F0u, 0x38F6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F6F8u;
label_38f6f8:
    // 0x38f6f8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x38f6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_38f6fc:
    // 0x38f6fc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x38f6fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_38f700:
    // 0x38f700: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x38f700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38f704:
    // 0x38f704: 0xc0e39c0  jal         func_38E700
label_38f708:
    if (ctx->pc == 0x38F708u) {
        ctx->pc = 0x38F708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F704u;
        // 0x38f708: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F70Cu;
        goto label_38f70c;
    }
    ctx->pc = 0x38F704u;
    SET_GPR_U32(ctx, 31, 0x38F70Cu);
    ctx->pc = 0x38F708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F704u;
    // 0x38f708: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F704u, 0x38F70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F70Cu;
label_38f70c:
    // 0x38f70c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x38f70cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_38f710:
    // 0x38f710: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_38f714:
    if (ctx->pc == 0x38F714u) {
        ctx->pc = 0x38F714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F710u;
        // 0x38f714: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F718u;
        goto label_38f718;
    }
    ctx->pc = 0x38F710u;
    {
        const bool branch_taken_0x38f710 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F710u;
        // 0x38f714: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f710) {
            ctx->pc = 0x38F754u;
            goto label_38f754;
        }
    }
    ctx->pc = 0x38F718u;
label_38f718:
    // 0x38f718: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x38f718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38f71c:
    // 0x38f71c: 0xc0e39c0  jal         func_38E700
label_38f720:
    if (ctx->pc == 0x38F720u) {
        ctx->pc = 0x38F720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F71Cu;
        // 0x38f720: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F724u;
        goto label_38f724;
    }
    ctx->pc = 0x38F71Cu;
    SET_GPR_U32(ctx, 31, 0x38F724u);
    ctx->pc = 0x38F720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F71Cu;
    // 0x38f720: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F71Cu, 0x38F724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F724u;
label_38f724:
    // 0x38f724: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x38f724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_38f728:
    // 0x38f728: 0xc0e39c0  jal         func_38E700
label_38f72c:
    if (ctx->pc == 0x38F72Cu) {
        ctx->pc = 0x38F72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F728u;
        // 0x38f72c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F730u;
        goto label_38f730;
    }
    ctx->pc = 0x38F728u;
    SET_GPR_U32(ctx, 31, 0x38F730u);
    ctx->pc = 0x38F72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F728u;
    // 0x38f72c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F728u, 0x38F730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F730u;
label_38f730:
    // 0x38f730: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x38f730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_38f734:
    // 0x38f734: 0xc0e39c0  jal         func_38E700
label_38f738:
    if (ctx->pc == 0x38F738u) {
        ctx->pc = 0x38F738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F734u;
        // 0x38f738: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F73Cu;
        goto label_38f73c;
    }
    ctx->pc = 0x38F734u;
    SET_GPR_U32(ctx, 31, 0x38F73Cu);
    ctx->pc = 0x38F738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F734u;
    // 0x38f738: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F734u, 0x38F73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F73Cu;
label_38f73c:
    // 0x38f73c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x38f73cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_38f740:
    // 0x38f740: 0xc0e39c0  jal         func_38E700
label_38f744:
    if (ctx->pc == 0x38F744u) {
        ctx->pc = 0x38F744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F740u;
        // 0x38f744: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F748u;
        goto label_38f748;
    }
    ctx->pc = 0x38F740u;
    SET_GPR_U32(ctx, 31, 0x38F748u);
    ctx->pc = 0x38F744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F740u;
    // 0x38f744: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F740u, 0x38F748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F748u;
label_38f748:
    // 0x38f748: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x38f748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_38f74c:
    // 0x38f74c: 0x1620fff2  bnez        $s1, . + 4 + (-0xE << 2)
label_38f750:
    if (ctx->pc == 0x38F750u) {
        ctx->pc = 0x38F750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F74Cu;
        // 0x38f750: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F754u;
        goto label_38f754;
    }
    ctx->pc = 0x38F74Cu;
    {
        const bool branch_taken_0x38f74c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F74Cu;
        // 0x38f750: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f74c) {
            ctx->pc = 0x38F718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38f718;
        }
    }
    ctx->pc = 0x38F754u;
label_38f754:
    // 0x38f754: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x38f754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_38f758:
    // 0x38f758: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x38f758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_38f75c:
    // 0x38f75c: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x38f75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_38f760:
    // 0x38f760: 0x60f809  jalr        $v1
label_38f764:
    if (ctx->pc == 0x38F764u) {
        ctx->pc = 0x38F764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F760u;
        // 0x38f764: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F768u;
        goto label_38f768;
    }
    ctx->pc = 0x38F760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38F768u);
        ctx->pc = 0x38F764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F760u;
        // 0x38f764: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F760u, 0x38F768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F768u;
label_38f768:
    // 0x38f768: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x38f768u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_38f76c:
    // 0x38f76c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x38f76cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38f770:
    // 0x38f770: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x38f770u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_38f774:
    // 0x38f774: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x38f774u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_38f778:
    // 0x38f778: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x38f778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38f77c:
    // 0x38f77c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x38f77cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38f780:
    // 0x38f780: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38f780u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38f784:
    // 0x38f784: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x38f784u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38f788:
    // 0x38f788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38f788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38f78c:
    // 0x38f78c: 0x3e00008  jr          $ra
label_38f790:
    if (ctx->pc == 0x38F790u) {
        ctx->pc = 0x38F790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F78Cu;
        // 0x38f790: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F794u;
        goto label_38f794;
    }
    ctx->pc = 0x38F78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F78Cu;
        // 0x38f790: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F794u;
label_38f794:
    // 0x38f794: 0x0  nop
    ctx->pc = 0x38f794u;
    // NOP
label_38f798:
    // 0x38f798: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x38f798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_38f79c:
    // 0x38f79c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38f79cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_38f7a0:
    // 0x38f7a0: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x38f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_38f7a4:
    // 0x38f7a4: 0x3c050103  lui         $a1, 0x103
    ctx->pc = 0x38f7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
label_38f7a8:
    // 0x38f7a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38f7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38f7ac:
    // 0x38f7ac: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x38f7acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_38f7b0:
    // 0x38f7b0: 0x40f809  jalr        $v0
label_38f7b4:
    if (ctx->pc == 0x38F7B4u) {
        ctx->pc = 0x38F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F7B0u;
        // 0x38f7b4: 0x34a50008  ori         $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F7B8u;
        goto label_38f7b8;
    }
    ctx->pc = 0x38F7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38F7B8u);
        ctx->pc = 0x38F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F7B0u;
        // 0x38f7b4: 0x34a50008  ori         $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F7B0u, 0x38F7B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F7B8u;
label_38f7b8:
    // 0x38f7b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38f7b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38f7bc:
    // 0x38f7bc: 0x3e00008  jr          $ra
label_38f7c0:
    if (ctx->pc == 0x38F7C0u) {
        ctx->pc = 0x38F7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F7BCu;
        // 0x38f7c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F7C4u;
        goto label_38f7c4;
    }
    ctx->pc = 0x38F7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F7BCu;
        // 0x38f7c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F7BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F7C4u;
label_38f7c4:
    // 0x38f7c4: 0x0  nop
    ctx->pc = 0x38f7c4u;
    // NOP
    ctx->pc = 0x38f7c8u;
}
