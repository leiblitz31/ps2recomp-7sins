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

// Function: sub_0044E660
// Address: 0x44e660 - 0x44ebb0
void sub_0044E660_0x44e660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044E660_0x44e660");
#endif

    switch (ctx->pc) {
        case 0x44e6ccu: goto label_44e6cc;
        case 0x44e6dcu: goto label_44e6dc;
        case 0x44e6f8u: goto label_44e6f8;
        case 0x44e71cu: goto label_44e71c;
        case 0x44e72cu: goto label_44e72c;
        case 0x44e748u: goto label_44e748;
        case 0x44e76cu: goto label_44e76c;
        case 0x44e77cu: goto label_44e77c;
        case 0x44e798u: goto label_44e798;
        case 0x44e7bcu: goto label_44e7bc;
        case 0x44e7ccu: goto label_44e7cc;
        case 0x44e7e8u: goto label_44e7e8;
        case 0x44e80cu: goto label_44e80c;
        case 0x44e81cu: goto label_44e81c;
        case 0x44e838u: goto label_44e838;
        case 0x44e85cu: goto label_44e85c;
        case 0x44e86cu: goto label_44e86c;
        case 0x44e888u: goto label_44e888;
        case 0x44e8acu: goto label_44e8ac;
        case 0x44e8bcu: goto label_44e8bc;
        case 0x44e8d8u: goto label_44e8d8;
        case 0x44e8fcu: goto label_44e8fc;
        case 0x44e90cu: goto label_44e90c;
        case 0x44e924u: goto label_44e924;
        case 0x44e944u: goto label_44e944;
        case 0x44e954u: goto label_44e954;
        case 0x44e96cu: goto label_44e96c;
        case 0x44e98cu: goto label_44e98c;
        case 0x44e99cu: goto label_44e99c;
        case 0x44e9b4u: goto label_44e9b4;
        case 0x44e9d4u: goto label_44e9d4;
        case 0x44e9e4u: goto label_44e9e4;
        case 0x44e9fcu: goto label_44e9fc;
        case 0x44ea1cu: goto label_44ea1c;
        case 0x44ea2cu: goto label_44ea2c;
        case 0x44ea44u: goto label_44ea44;
        case 0x44ea64u: goto label_44ea64;
        case 0x44ea74u: goto label_44ea74;
        case 0x44ea8cu: goto label_44ea8c;
        case 0x44eaacu: goto label_44eaac;
        case 0x44eabcu: goto label_44eabc;
        case 0x44ead4u: goto label_44ead4;
        case 0x44eaf4u: goto label_44eaf4;
        case 0x44eb04u: goto label_44eb04;
        case 0x44eb1cu: goto label_44eb1c;
        case 0x44eb3cu: goto label_44eb3c;
        case 0x44eb4cu: goto label_44eb4c;
        case 0x44eb64u: goto label_44eb64;
        default: break;
    }

    ctx->pc = 0x44e660u;

    // 0x44e660: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x44e660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x44e664: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x44e664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x44e668: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x44e668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x44e66c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x44e66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x44e670: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x44e670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x44e674: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x44e674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x44e678: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x44e678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x44e67c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x44e67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x44e680: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x44e680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x44e684: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44e684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x44e688: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44e688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x44e68c: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x44e68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x44e690: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x44e690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x44e694: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x44e694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x44e698: 0x2c610012  sltiu       $at, $v1, 0x12
    ctx->pc = 0x44e698u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x44e69c: 0x10200134  beqz        $at, . + 4 + (0x134 << 2)
    ctx->pc = 0x44E69Cu;
    {
        const bool branch_taken_0x44e69c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e69c) {
            ctx->pc = 0x44EB70u;
            goto label_44eb70;
        }
    }
    ctx->pc = 0x44E6A4u;
    // 0x44e6a4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x44e6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x44e6a8: 0x248418d0  addiu       $a0, $a0, 0x18D0
    ctx->pc = 0x44e6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6352));
    // 0x44e6ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x44e6acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x44e6b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x44e6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x44e6b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x44e6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x44e6b8: 0x600008  jr          $v1
    ctx->pc = 0x44E6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x44E6C0u: goto label_44e6c0;
            case 0x44E710u: goto label_44e710;
            case 0x44E760u: goto label_44e760;
            case 0x44E7B0u: goto label_44e7b0;
            case 0x44E800u: goto label_44e800;
            case 0x44E850u: goto label_44e850;
            case 0x44E8A0u: goto label_44e8a0;
            case 0x44E8F0u: goto label_44e8f0;
            case 0x44E938u: goto label_44e938;
            case 0x44E980u: goto label_44e980;
            case 0x44E9C8u: goto label_44e9c8;
            case 0x44EA10u: goto label_44ea10;
            case 0x44EA58u: goto label_44ea58;
            case 0x44EAA0u: goto label_44eaa0;
            case 0x44EAE8u: goto label_44eae8;
            case 0x44EB30u: goto label_44eb30;
            case 0x44EB70u: goto label_44eb70;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E6B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x44E6C0u;
label_44e6c0:
    // 0x44e6c0: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x44e6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x44e6c4: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x44E6C4u;
    SET_GPR_U32(ctx, 31, 0x44E6CCu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x44E6C4u, 0x44E6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E6CCu;
label_44e6cc:
    // 0x44e6cc: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x44e6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x44e6d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x44e6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44e6d4: 0xc0400e0  jal         func_100380
    ctx->pc = 0x44E6D4u;
    SET_GPR_U32(ctx, 31, 0x44E6DCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x44E6D4u, 0x44E6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E6DCu;
label_44e6dc:
    // 0x44e6dc: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x44e6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x44e6e0: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x44e6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x44e6e4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x44E6E4u;
    {
        const bool branch_taken_0x44e6e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e6e4) {
            ctx->pc = 0x44E6FCu;
            goto label_44e6fc;
        }
    }
    ctx->pc = 0x44E6ECu;
    // 0x44e6ec: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x44e6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x44e6f0: 0xc113cbc  jal         func_44F2F0
    ctx->pc = 0x44E6F0u;
    SET_GPR_U32(ctx, 31, 0x44E6F8u);
    ctx->pc = 0x44F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F2F0u, 0x44E6F0u, 0x44E6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E6F8u;
label_44e6f8:
    // 0x44e6f8: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x44e6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_44e6fc:
    // 0x44e6fc: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x44e6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x44e700: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x44e700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x44e704: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x44e704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x44e708: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x44E708u;
    {
        const bool branch_taken_0x44e708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e708) {
            ctx->pc = 0x44EB70u;
            goto label_44eb70;
        }
    }
    ctx->pc = 0x44E710u;
label_44e710:
    // 0x44e710: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x44e710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x44e714: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x44E714u;
    SET_GPR_U32(ctx, 31, 0x44E71Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x44E714u, 0x44E71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E71Cu;
label_44e71c:
    // 0x44e71c: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x44e71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x44e720: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x44e720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44e724: 0xc0400e0  jal         func_100380
    ctx->pc = 0x44E724u;
    SET_GPR_U32(ctx, 31, 0x44E72Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x44E724u, 0x44E72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E72Cu;
label_44e72c:
    // 0x44e72c: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x44e72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x44e730: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x44e730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x44e734: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x44E734u;
    {
        const bool branch_taken_0x44e734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e734) {
            ctx->pc = 0x44E74Cu;
            goto label_44e74c;
        }
    }
    ctx->pc = 0x44E73Cu;
    // 0x44e73c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x44e73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x44e740: 0xc113ca0  jal         func_44F280
    ctx->pc = 0x44E740u;
    SET_GPR_U32(ctx, 31, 0x44E748u);
    ctx->pc = 0x44F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F280u, 0x44E740u, 0x44E748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E748u;
label_44e748:
    // 0x44e748: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x44e748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_44e74c:
    // 0x44e74c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x44e74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x44e750: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x44e750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x44e754: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x44e754u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x44e758: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x44E758u;
    {
        const bool branch_taken_0x44e758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e758) {
            ctx->pc = 0x44EB70u;
            goto label_44eb70;
        }
    }
    ctx->pc = 0x44E760u;
label_44e760:
    // 0x44e760: 0x24040088  addiu       $a0, $zero, 0x88
    ctx->pc = 0x44e760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x44e764: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x44E764u;
    SET_GPR_U32(ctx, 31, 0x44E76Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x44E764u, 0x44E76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E76Cu;
label_44e76c:
    // 0x44e76c: 0x24040088  addiu       $a0, $zero, 0x88
    ctx->pc = 0x44e76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x44e770: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x44e770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44e774: 0xc0400e0  jal         func_100380
    ctx->pc = 0x44E774u;
    SET_GPR_U32(ctx, 31, 0x44E77Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x44E774u, 0x44E77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E77Cu;
label_44e77c:
    // 0x44e77c: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x44e77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x44e780: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x44e780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x44e784: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x44E784u;
    {
        const bool branch_taken_0x44e784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e784) {
            ctx->pc = 0x44E79Cu;
            goto label_44e79c;
        }
    }
    ctx->pc = 0x44E78Cu;
    // 0x44e78c: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x44e78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x44e790: 0xc113c78  jal         func_44F1E0
    ctx->pc = 0x44E790u;
    SET_GPR_U32(ctx, 31, 0x44E798u);
    ctx->pc = 0x44F1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F1E0u, 0x44E790u, 0x44E798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E798u;
label_44e798:
    // 0x44e798: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x44e798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_44e79c:
    // 0x44e79c: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x44e79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x44e7a0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x44e7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x44e7a4: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x44e7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x44e7a8: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x44E7A8u;
    {
        const bool branch_taken_0x44e7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e7a8) {
            ctx->pc = 0x44EB70u;
            goto label_44eb70;
        }
    }
    ctx->pc = 0x44E7B0u;
label_44e7b0:
    // 0x44e7b0: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x44e7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x44e7b4: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x44E7B4u;
    SET_GPR_U32(ctx, 31, 0x44E7BCu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x44E7B4u, 0x44E7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E7BCu;
label_44e7bc:
    // 0x44e7bc: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x44e7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x44e7c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x44e7c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44e7c4: 0xc0400e0  jal         func_100380
    ctx->pc = 0x44E7C4u;
    SET_GPR_U32(ctx, 31, 0x44E7CCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x44E7C4u, 0x44E7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E7CCu;
label_44e7cc:
    // 0x44e7cc: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x44e7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x44e7d0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x44e7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x44e7d4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x44E7D4u;
    {
        const bool branch_taken_0x44e7d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e7d4) {
            ctx->pc = 0x44E7ECu;
            goto label_44e7ec;
        }
    }
    ctx->pc = 0x44E7DCu;
    // 0x44e7dc: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x44e7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x44e7e0: 0xc113c58  jal         func_44F160
    ctx->pc = 0x44E7E0u;
    SET_GPR_U32(ctx, 31, 0x44E7E8u);
    ctx->pc = 0x44F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F160u, 0x44E7E0u, 0x44E7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E7E8u;
label_44e7e8:
    // 0x44e7e8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x44e7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_44e7ec:
    // 0x44e7ec: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x44e7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x44e7f0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x44e7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x44e7f4: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x44e7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x44e7f8: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x44E7F8u;
    {
        const bool branch_taken_0x44e7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e7f8) {
            ctx->pc = 0x44EB70u;
            goto label_44eb70;
        }
    }
    ctx->pc = 0x44E800u;
label_44e800:
    // 0x44e800: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x44e800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x44e804: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x44E804u;
    SET_GPR_U32(ctx, 31, 0x44E80Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x44E804u, 0x44E80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E80Cu;
label_44e80c:
    // 0x44e80c: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x44e80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x44e810: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x44e810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44e814: 0xc0400e0  jal         func_100380
    ctx->pc = 0x44E814u;
    SET_GPR_U32(ctx, 31, 0x44E81Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x44E814u, 0x44E81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E81Cu;
label_44e81c:
    // 0x44e81c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x44e81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x44e820: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x44e820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x44e824: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x44E824u;
    {
        const bool branch_taken_0x44e824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e824) {
            ctx->pc = 0x44E83Cu;
            goto label_44e83c;
        }
    }
    ctx->pc = 0x44E82Cu;
    // 0x44e82c: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x44e82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x44e830: 0xc113c3c  jal         func_44F0F0
    ctx->pc = 0x44E830u;
    SET_GPR_U32(ctx, 31, 0x44E838u);
    ctx->pc = 0x44F0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F0F0u, 0x44E830u, 0x44E838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E838u;
label_44e838:
    // 0x44e838: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x44e838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_44e83c:
    // 0x44e83c: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x44e83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x44e840: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x44e840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x44e844: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x44e844u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x44e848: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x44E848u;
    {
        const bool branch_taken_0x44e848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e848) {
            ctx->pc = 0x44EB70u;
            goto label_44eb70;
        }
    }
    ctx->pc = 0x44E850u;
label_44e850:
    // 0x44e850: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x44e850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x44e854: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x44E854u;
    SET_GPR_U32(ctx, 31, 0x44E85Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x44E854u, 0x44E85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E85Cu;
label_44e85c:
    // 0x44e85c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x44e85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x44e860: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x44e860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44e864: 0xc0400e0  jal         func_100380
    ctx->pc = 0x44E864u;
    SET_GPR_U32(ctx, 31, 0x44E86Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x44E864u, 0x44E86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E86Cu;
label_44e86c:
    // 0x44e86c: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x44e86cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x44e870: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x44e870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x44e874: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x44E874u;
    {
        const bool branch_taken_0x44e874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e874) {
            ctx->pc = 0x44E88Cu;
            goto label_44e88c;
        }
    }
    ctx->pc = 0x44E87Cu;
    // 0x44e87c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x44e87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x44e880: 0xc113c1c  jal         func_44F070
    ctx->pc = 0x44E880u;
    SET_GPR_U32(ctx, 31, 0x44E888u);
    ctx->pc = 0x44F070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F070u, 0x44E880u, 0x44E888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E888u;
label_44e888:
    // 0x44e888: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x44e888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_44e88c:
    // 0x44e88c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x44e88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x44e890: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x44e890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x44e894: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x44e894u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x44e898: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x44E898u;
    {
        const bool branch_taken_0x44e898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e898) {
            ctx->pc = 0x44EB70u;
            goto label_44eb70;
        }
    }
    ctx->pc = 0x44E8A0u;
label_44e8a0:
    // 0x44e8a0: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x44e8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x44e8a4: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x44E8A4u;
    SET_GPR_U32(ctx, 31, 0x44E8ACu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x44E8A4u, 0x44E8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E8ACu;
label_44e8ac:
    // 0x44e8ac: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x44e8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x44e8b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x44e8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44e8b4: 0xc0400e0  jal         func_100380
    ctx->pc = 0x44E8B4u;
    SET_GPR_U32(ctx, 31, 0x44E8BCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x44E8B4u, 0x44E8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E8BCu;
label_44e8bc:
    // 0x44e8bc: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x44e8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x44e8c0: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x44e8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x44e8c4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x44E8C4u;
    {
        const bool branch_taken_0x44e8c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e8c4) {
            ctx->pc = 0x44E8DCu;
            goto label_44e8dc;
        }
    }
    ctx->pc = 0x44E8CCu;
    // 0x44e8cc: 0x8fa400a4  lw          $a0, 0xA4($sp)
    ctx->pc = 0x44e8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x44e8d0: 0xc113bf8  jal         func_44EFE0
    ctx->pc = 0x44E8D0u;
    SET_GPR_U32(ctx, 31, 0x44E8D8u);
    ctx->pc = 0x44EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44EFE0u, 0x44E8D0u, 0x44E8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E8D8u;
label_44e8d8:
    // 0x44e8d8: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x44e8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_44e8dc:
    // 0x44e8dc: 0x8fa400a4  lw          $a0, 0xA4($sp)
    ctx->pc = 0x44e8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x44e8e0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x44e8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x44e8e4: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x44e8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x44e8e8: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x44E8E8u;
    {
        const bool branch_taken_0x44e8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e8e8) {
            ctx->pc = 0x44EB70u;
            goto label_44eb70;
        }
    }
    ctx->pc = 0x44E8F0u;
label_44e8f0:
    // 0x44e8f0: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x44e8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x44e8f4: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x44E8F4u;
    SET_GPR_U32(ctx, 31, 0x44E8FCu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x44E8F4u, 0x44E8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E8FCu;
label_44e8fc:
    // 0x44e8fc: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x44e8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x44e900: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x44e900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44e904: 0xc0400e0  jal         func_100380
    ctx->pc = 0x44E904u;
    SET_GPR_U32(ctx, 31, 0x44E90Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x44E904u, 0x44E90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E90Cu;
label_44e90c:
    // 0x44e90c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x44e90cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44e910: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x44E910u;
    {
        const bool branch_taken_0x44e910 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e910) {
            ctx->pc = 0x44E928u;
            goto label_44e928;
        }
    }
    ctx->pc = 0x44E918u;
    // 0x44e918: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x44e918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44e91c: 0xc113bd8  jal         func_44EF60
    ctx->pc = 0x44E91Cu;
    SET_GPR_U32(ctx, 31, 0x44E924u);
    ctx->pc = 0x44EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44EF60u, 0x44E91Cu, 0x44E924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E924u;
label_44e924:
    // 0x44e924: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x44e924u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44e928:
    // 0x44e928: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x44e928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x44e92c: 0xac7e0020  sw          $fp, 0x20($v1)
    ctx->pc = 0x44e92cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 30));
    // 0x44e930: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x44E930u;
    {
        const bool branch_taken_0x44e930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e930) {
            ctx->pc = 0x44EB70u;
            goto label_44eb70;
        }
    }
    ctx->pc = 0x44E938u;
label_44e938:
    // 0x44e938: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x44e938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x44e93c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x44E93Cu;
    SET_GPR_U32(ctx, 31, 0x44E944u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x44E93Cu, 0x44E944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E944u;
label_44e944:
    // 0x44e944: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x44e944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x44e948: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x44e948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44e94c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x44E94Cu;
    SET_GPR_U32(ctx, 31, 0x44E954u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x44E94Cu, 0x44E954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E954u;
label_44e954:
    // 0x44e954: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x44e954u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44e958: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x44E958u;
    {
        const bool branch_taken_0x44e958 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e958) {
            ctx->pc = 0x44E970u;
            goto label_44e970;
        }
    }
    ctx->pc = 0x44E960u;
    // 0x44e960: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x44e960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44e964: 0xc113bbc  jal         func_44EEF0
    ctx->pc = 0x44E964u;
    SET_GPR_U32(ctx, 31, 0x44E96Cu);
    ctx->pc = 0x44EEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44EEF0u, 0x44E964u, 0x44E96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E96Cu;
label_44e96c:
    // 0x44e96c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x44e96cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44e970:
    // 0x44e970: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x44e970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x44e974: 0xac770020  sw          $s7, 0x20($v1)
    ctx->pc = 0x44e974u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 23));
    // 0x44e978: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x44E978u;
    {
        const bool branch_taken_0x44e978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e978) {
            ctx->pc = 0x44EB70u;
            goto label_44eb70;
        }
    }
    ctx->pc = 0x44E980u;
label_44e980:
    // 0x44e980: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x44e980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x44e984: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x44E984u;
    SET_GPR_U32(ctx, 31, 0x44E98Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x44E984u, 0x44E98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E98Cu;
label_44e98c:
    // 0x44e98c: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x44e98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x44e990: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x44e990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44e994: 0xc0400e0  jal         func_100380
    ctx->pc = 0x44E994u;
    SET_GPR_U32(ctx, 31, 0x44E99Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x44E994u, 0x44E99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E99Cu;
label_44e99c:
    // 0x44e99c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x44e99cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44e9a0: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x44E9A0u;
    {
        const bool branch_taken_0x44e9a0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e9a0) {
            ctx->pc = 0x44E9B8u;
            goto label_44e9b8;
        }
    }
    ctx->pc = 0x44E9A8u;
    // 0x44e9a8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x44e9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44e9ac: 0xc113ba0  jal         func_44EE80
    ctx->pc = 0x44E9ACu;
    SET_GPR_U32(ctx, 31, 0x44E9B4u);
    ctx->pc = 0x44EE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44EE80u, 0x44E9ACu, 0x44E9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E9B4u;
label_44e9b4:
    // 0x44e9b4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x44e9b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44e9b8:
    // 0x44e9b8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x44e9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x44e9bc: 0xac760020  sw          $s6, 0x20($v1)
    ctx->pc = 0x44e9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 22));
    // 0x44e9c0: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x44E9C0u;
    {
        const bool branch_taken_0x44e9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e9c0) {
            ctx->pc = 0x44EB70u;
            goto label_44eb70;
        }
    }
    ctx->pc = 0x44E9C8u;
label_44e9c8:
    // 0x44e9c8: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x44e9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x44e9cc: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x44E9CCu;
    SET_GPR_U32(ctx, 31, 0x44E9D4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x44E9CCu, 0x44E9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E9D4u;
label_44e9d4:
    // 0x44e9d4: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x44e9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x44e9d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x44e9d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44e9dc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x44E9DCu;
    SET_GPR_U32(ctx, 31, 0x44E9E4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x44E9DCu, 0x44E9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E9E4u;
label_44e9e4:
    // 0x44e9e4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x44e9e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44e9e8: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x44E9E8u;
    {
        const bool branch_taken_0x44e9e8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e9e8) {
            ctx->pc = 0x44EA00u;
            goto label_44ea00;
        }
    }
    ctx->pc = 0x44E9F0u;
    // 0x44e9f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x44e9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44e9f4: 0xc113b78  jal         func_44EDE0
    ctx->pc = 0x44E9F4u;
    SET_GPR_U32(ctx, 31, 0x44E9FCu);
    ctx->pc = 0x44EDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44EDE0u, 0x44E9F4u, 0x44E9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E9FCu;
label_44e9fc:
    // 0x44e9fc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x44e9fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44ea00:
    // 0x44ea00: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x44ea00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x44ea04: 0xac750020  sw          $s5, 0x20($v1)
    ctx->pc = 0x44ea04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 21));
    // 0x44ea08: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x44EA08u;
    {
        const bool branch_taken_0x44ea08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ea08) {
            ctx->pc = 0x44EB70u;
            goto label_44eb70;
        }
    }
    ctx->pc = 0x44EA10u;
label_44ea10:
    // 0x44ea10: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x44ea10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x44ea14: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x44EA14u;
    SET_GPR_U32(ctx, 31, 0x44EA1Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x44EA14u, 0x44EA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44EA1Cu;
label_44ea1c:
    // 0x44ea1c: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x44ea1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x44ea20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x44ea20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44ea24: 0xc0400e0  jal         func_100380
    ctx->pc = 0x44EA24u;
    SET_GPR_U32(ctx, 31, 0x44EA2Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x44EA24u, 0x44EA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44EA2Cu;
label_44ea2c:
    // 0x44ea2c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x44ea2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44ea30: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x44EA30u;
    {
        const bool branch_taken_0x44ea30 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ea30) {
            ctx->pc = 0x44EA48u;
            goto label_44ea48;
        }
    }
    ctx->pc = 0x44EA38u;
    // 0x44ea38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x44ea38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44ea3c: 0xc113b54  jal         func_44ED50
    ctx->pc = 0x44EA3Cu;
    SET_GPR_U32(ctx, 31, 0x44EA44u);
    ctx->pc = 0x44ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44ED50u, 0x44EA3Cu, 0x44EA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44EA44u;
label_44ea44:
    // 0x44ea44: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x44ea44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44ea48:
    // 0x44ea48: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x44ea48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x44ea4c: 0xac740020  sw          $s4, 0x20($v1)
    ctx->pc = 0x44ea4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 20));
    // 0x44ea50: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x44EA50u;
    {
        const bool branch_taken_0x44ea50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ea50) {
            ctx->pc = 0x44EB70u;
            goto label_44eb70;
        }
    }
    ctx->pc = 0x44EA58u;
label_44ea58:
    // 0x44ea58: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x44ea58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x44ea5c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x44EA5Cu;
    SET_GPR_U32(ctx, 31, 0x44EA64u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x44EA5Cu, 0x44EA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44EA64u;
label_44ea64:
    // 0x44ea64: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x44ea64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x44ea68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x44ea68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44ea6c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x44EA6Cu;
    SET_GPR_U32(ctx, 31, 0x44EA74u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x44EA6Cu, 0x44EA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44EA74u;
label_44ea74:
    // 0x44ea74: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x44ea74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44ea78: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x44EA78u;
    {
        const bool branch_taken_0x44ea78 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ea78) {
            ctx->pc = 0x44EA90u;
            goto label_44ea90;
        }
    }
    ctx->pc = 0x44EA80u;
    // 0x44ea80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x44ea80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44ea84: 0xc113b34  jal         func_44ECD0
    ctx->pc = 0x44EA84u;
    SET_GPR_U32(ctx, 31, 0x44EA8Cu);
    ctx->pc = 0x44ECD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44ECD0u, 0x44EA84u, 0x44EA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44EA8Cu;
label_44ea8c:
    // 0x44ea8c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x44ea8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44ea90:
    // 0x44ea90: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x44ea90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x44ea94: 0xac730020  sw          $s3, 0x20($v1)
    ctx->pc = 0x44ea94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 19));
    // 0x44ea98: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x44EA98u;
    {
        const bool branch_taken_0x44ea98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ea98) {
            ctx->pc = 0x44EB70u;
            goto label_44eb70;
        }
    }
    ctx->pc = 0x44EAA0u;
label_44eaa0:
    // 0x44eaa0: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x44eaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x44eaa4: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x44EAA4u;
    SET_GPR_U32(ctx, 31, 0x44EAACu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x44EAA4u, 0x44EAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44EAACu;
label_44eaac:
    // 0x44eaac: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x44eaacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x44eab0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x44eab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44eab4: 0xc0400e0  jal         func_100380
    ctx->pc = 0x44EAB4u;
    SET_GPR_U32(ctx, 31, 0x44EABCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x44EAB4u, 0x44EABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44EABCu;
label_44eabc:
    // 0x44eabc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x44eabcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44eac0: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x44EAC0u;
    {
        const bool branch_taken_0x44eac0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x44eac0) {
            ctx->pc = 0x44EAD8u;
            goto label_44ead8;
        }
    }
    ctx->pc = 0x44EAC8u;
    // 0x44eac8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x44eac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44eacc: 0xc113b14  jal         func_44EC50
    ctx->pc = 0x44EACCu;
    SET_GPR_U32(ctx, 31, 0x44EAD4u);
    ctx->pc = 0x44EC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44EC50u, 0x44EACCu, 0x44EAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44EAD4u;
label_44ead4:
    // 0x44ead4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x44ead4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44ead8:
    // 0x44ead8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x44ead8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x44eadc: 0xac720020  sw          $s2, 0x20($v1)
    ctx->pc = 0x44eadcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 18));
    // 0x44eae0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x44EAE0u;
    {
        const bool branch_taken_0x44eae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44eae0) {
            ctx->pc = 0x44EB70u;
            goto label_44eb70;
        }
    }
    ctx->pc = 0x44EAE8u;
label_44eae8:
    // 0x44eae8: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x44eae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x44eaec: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x44EAECu;
    SET_GPR_U32(ctx, 31, 0x44EAF4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x44EAECu, 0x44EAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44EAF4u;
label_44eaf4:
    // 0x44eaf4: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x44eaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x44eaf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x44eaf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44eafc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x44EAFCu;
    SET_GPR_U32(ctx, 31, 0x44EB04u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x44EAFCu, 0x44EB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44EB04u;
label_44eb04:
    // 0x44eb04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x44eb04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44eb08: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x44EB08u;
    {
        const bool branch_taken_0x44eb08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x44eb08) {
            ctx->pc = 0x44EB20u;
            goto label_44eb20;
        }
    }
    ctx->pc = 0x44EB10u;
    // 0x44eb10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44eb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44eb14: 0xc113aec  jal         func_44EBB0
    ctx->pc = 0x44EB14u;
    SET_GPR_U32(ctx, 31, 0x44EB1Cu);
    ctx->pc = 0x44EBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44EBB0u, 0x44EB14u, 0x44EB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44EB1Cu;
label_44eb1c:
    // 0x44eb1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x44eb1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44eb20:
    // 0x44eb20: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x44eb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x44eb24: 0xac710020  sw          $s1, 0x20($v1)
    ctx->pc = 0x44eb24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 17));
    // 0x44eb28: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x44EB28u;
    {
        const bool branch_taken_0x44eb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44eb28) {
            ctx->pc = 0x44EB70u;
            goto label_44eb70;
        }
    }
    ctx->pc = 0x44EB30u;
label_44eb30:
    // 0x44eb30: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x44eb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x44eb34: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x44EB34u;
    SET_GPR_U32(ctx, 31, 0x44EB3Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x44EB34u, 0x44EB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44EB3Cu;
label_44eb3c:
    // 0x44eb3c: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x44eb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x44eb40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x44eb40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44eb44: 0xc0400e0  jal         func_100380
    ctx->pc = 0x44EB44u;
    SET_GPR_U32(ctx, 31, 0x44EB4Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x44EB44u, 0x44EB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44EB4Cu;
label_44eb4c:
    // 0x44eb4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x44eb4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44eb50: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x44EB50u;
    {
        const bool branch_taken_0x44eb50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x44eb50) {
            ctx->pc = 0x44EB68u;
            goto label_44eb68;
        }
    }
    ctx->pc = 0x44EB58u;
    // 0x44eb58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44eb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44eb5c: 0xc113aec  jal         func_44EBB0
    ctx->pc = 0x44EB5Cu;
    SET_GPR_U32(ctx, 31, 0x44EB64u);
    ctx->pc = 0x44EBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44EBB0u, 0x44EB5Cu, 0x44EB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44EB64u;
label_44eb64:
    // 0x44eb64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x44eb64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44eb68:
    // 0x44eb68: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x44eb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x44eb6c: 0xac700020  sw          $s0, 0x20($v1)
    ctx->pc = 0x44eb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 16));
label_44eb70:
    // 0x44eb70: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x44eb70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x44eb74: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x44eb74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x44eb78: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x44eb78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x44eb7c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x44eb7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x44eb80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x44eb80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x44eb84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x44eb84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x44eb88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x44eb88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44eb8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x44eb8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44eb90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44eb90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44eb94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44eb94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44eb98: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x44eb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x44eb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x44EB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44EB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44EBA4u;
    // 0x44eba4: 0x0  nop
    ctx->pc = 0x44eba4u;
    // NOP
    // 0x44eba8: 0x0  nop
    ctx->pc = 0x44eba8u;
    // NOP
    // 0x44ebac: 0x0  nop
    ctx->pc = 0x44ebacu;
    // NOP
    ctx->pc = 0x44ebb0u;
}
