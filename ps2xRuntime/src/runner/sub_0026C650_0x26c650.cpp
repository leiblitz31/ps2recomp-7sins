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

// Function: sub_0026C650
// Address: 0x26c650 - 0x26c960
void sub_0026C650_0x26c650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C650_0x26c650");
#endif

    switch (ctx->pc) {
        case 0x26c680u: goto label_26c680;
        case 0x26c6b8u: goto label_26c6b8;
        case 0x26c6ccu: goto label_26c6cc;
        case 0x26c6e0u: goto label_26c6e0;
        case 0x26c6f4u: goto label_26c6f4;
        case 0x26c710u: goto label_26c710;
        case 0x26c728u: goto label_26c728;
        case 0x26c73cu: goto label_26c73c;
        case 0x26c750u: goto label_26c750;
        case 0x26c764u: goto label_26c764;
        case 0x26c780u: goto label_26c780;
        case 0x26c798u: goto label_26c798;
        case 0x26c7acu: goto label_26c7ac;
        case 0x26c7c0u: goto label_26c7c0;
        case 0x26c7d4u: goto label_26c7d4;
        case 0x26c7f0u: goto label_26c7f0;
        case 0x26c808u: goto label_26c808;
        case 0x26c81cu: goto label_26c81c;
        case 0x26c830u: goto label_26c830;
        case 0x26c844u: goto label_26c844;
        case 0x26c860u: goto label_26c860;
        case 0x26c878u: goto label_26c878;
        case 0x26c88cu: goto label_26c88c;
        case 0x26c8a0u: goto label_26c8a0;
        case 0x26c8b4u: goto label_26c8b4;
        case 0x26c8d0u: goto label_26c8d0;
        case 0x26c8e8u: goto label_26c8e8;
        case 0x26c8fcu: goto label_26c8fc;
        case 0x26c910u: goto label_26c910;
        case 0x26c924u: goto label_26c924;
        case 0x26c940u: goto label_26c940;
        default: break;
    }

    ctx->pc = 0x26c650u;

    // 0x26c650: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26c650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26c654: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26c654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26c658: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26c658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26c65c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26c65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26c660: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x26c660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x26c664: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x26c664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x26c668: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x26c668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26c66c: 0x106000b4  beqz        $v1, . + 4 + (0xB4 << 2)
    ctx->pc = 0x26C66Cu;
    {
        const bool branch_taken_0x26c66c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c66c) {
            ctx->pc = 0x26C940u;
            goto label_26c940;
        }
    }
    ctx->pc = 0x26C674u;
    // 0x26c674: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x26c674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26c678: 0xc099938  jal         func_2664E0
    ctx->pc = 0x26C678u;
    SET_GPR_U32(ctx, 31, 0x26C680u);
    ctx->pc = 0x2664E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2664E0u, 0x26C678u, 0x26C680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C680u;
label_26c680:
    // 0x26c680: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x26c680u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x26c684: 0x102000ae  beqz        $at, . + 4 + (0xAE << 2)
    ctx->pc = 0x26C684u;
    {
        const bool branch_taken_0x26c684 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c684) {
            ctx->pc = 0x26C940u;
            goto label_26c940;
        }
    }
    ctx->pc = 0x26C68Cu;
    // 0x26c68c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x26c68cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x26c690: 0x24848ac0  addiu       $a0, $a0, -0x7540
    ctx->pc = 0x26c690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937280));
    // 0x26c694: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x26c694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26c698: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26c698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26c69c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x26c69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26c6a0: 0x600008  jr          $v1
    ctx->pc = 0x26C6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26C6A8u: goto label_26c6a8;
            case 0x26C718u: goto label_26c718;
            case 0x26C788u: goto label_26c788;
            case 0x26C7F8u: goto label_26c7f8;
            case 0x26C868u: goto label_26c868;
            case 0x26C8D8u: goto label_26c8d8;
            case 0x26C940u: goto label_26c940;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C6A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26C6A8u;
label_26c6a8:
    // 0x26c6a8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c6ac: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x26c6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x26c6b0: 0xc04809c  jal         func_120270
    ctx->pc = 0x26C6B0u;
    SET_GPR_U32(ctx, 31, 0x26C6B8u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x26C6B0u, 0x26C6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C6B8u;
label_26c6b8:
    // 0x26c6b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26c6b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c6bc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26c6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c6c0: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x26c6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x26c6c4: 0xc04808c  jal         func_120230
    ctx->pc = 0x26C6C4u;
    SET_GPR_U32(ctx, 31, 0x26C6CCu);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26C6C4u, 0x26C6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C6CCu;
label_26c6cc:
    // 0x26c6cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26c6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c6d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26c6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c6d4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x26c6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26c6d8: 0xc09bd40  jal         func_26F500
    ctx->pc = 0x26C6D8u;
    SET_GPR_U32(ctx, 31, 0x26C6E0u);
    ctx->pc = 0x26F500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F500u, 0x26C6D8u, 0x26C6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C6E0u;
label_26c6e0:
    // 0x26c6e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26c6e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c6e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c6e8: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x26c6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x26c6ec: 0xc04808c  jal         func_120230
    ctx->pc = 0x26C6ECu;
    SET_GPR_U32(ctx, 31, 0x26C6F4u);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26C6ECu, 0x26C6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C6F4u;
label_26c6f4:
    // 0x26c6f4: 0x12020092  beq         $s0, $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x26C6F4u;
    {
        const bool branch_taken_0x26c6f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x26c6f4) {
            ctx->pc = 0x26C940u;
            goto label_26c940;
        }
    }
    ctx->pc = 0x26C6FCu;
    // 0x26c6fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26c6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c700: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x26c700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x26c704: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26c704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c708: 0xc09b258  jal         func_26C960
    ctx->pc = 0x26C708u;
    SET_GPR_U32(ctx, 31, 0x26C710u);
    ctx->pc = 0x26C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C960u, 0x26C708u, 0x26C710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C710u;
label_26c710:
    // 0x26c710: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x26C710u;
    {
        const bool branch_taken_0x26c710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c710) {
            ctx->pc = 0x26C940u;
            goto label_26c940;
        }
    }
    ctx->pc = 0x26C718u;
label_26c718:
    // 0x26c718: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26c718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c71c: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x26c71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x26c720: 0xc04809c  jal         func_120270
    ctx->pc = 0x26C720u;
    SET_GPR_U32(ctx, 31, 0x26C728u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x26C720u, 0x26C728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C728u;
label_26c728:
    // 0x26c728: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26c728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c72c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26c72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c730: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x26c730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x26c734: 0xc04808c  jal         func_120230
    ctx->pc = 0x26C734u;
    SET_GPR_U32(ctx, 31, 0x26C73Cu);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26C734u, 0x26C73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C73Cu;
label_26c73c:
    // 0x26c73c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26c73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c740: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26c740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c744: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x26c744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26c748: 0xc09bd40  jal         func_26F500
    ctx->pc = 0x26C748u;
    SET_GPR_U32(ctx, 31, 0x26C750u);
    ctx->pc = 0x26F500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F500u, 0x26C748u, 0x26C750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C750u;
label_26c750:
    // 0x26c750: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26c750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c754: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26c754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c758: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x26c758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x26c75c: 0xc04808c  jal         func_120230
    ctx->pc = 0x26C75Cu;
    SET_GPR_U32(ctx, 31, 0x26C764u);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26C75Cu, 0x26C764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C764u;
label_26c764:
    // 0x26c764: 0x12020076  beq         $s0, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x26C764u;
    {
        const bool branch_taken_0x26c764 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x26c764) {
            ctx->pc = 0x26C940u;
            goto label_26c940;
        }
    }
    ctx->pc = 0x26C76Cu;
    // 0x26c76c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c770: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x26c770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x26c774: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26c774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c778: 0xc09b258  jal         func_26C960
    ctx->pc = 0x26C778u;
    SET_GPR_U32(ctx, 31, 0x26C780u);
    ctx->pc = 0x26C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C960u, 0x26C778u, 0x26C780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C780u;
label_26c780:
    // 0x26c780: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x26C780u;
    {
        const bool branch_taken_0x26c780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c780) {
            ctx->pc = 0x26C940u;
            goto label_26c940;
        }
    }
    ctx->pc = 0x26C788u;
label_26c788:
    // 0x26c788: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26c788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c78c: 0x24440088  addiu       $a0, $v0, 0x88
    ctx->pc = 0x26c78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x26c790: 0xc04809c  jal         func_120270
    ctx->pc = 0x26C790u;
    SET_GPR_U32(ctx, 31, 0x26C798u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x26C790u, 0x26C798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C798u;
label_26c798:
    // 0x26c798: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26c798u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c79c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c7a0: 0x24440088  addiu       $a0, $v0, 0x88
    ctx->pc = 0x26c7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x26c7a4: 0xc04808c  jal         func_120230
    ctx->pc = 0x26C7A4u;
    SET_GPR_U32(ctx, 31, 0x26C7ACu);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26C7A4u, 0x26C7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C7ACu;
label_26c7ac:
    // 0x26c7ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26c7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c7b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26c7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c7b4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x26c7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26c7b8: 0xc09bd40  jal         func_26F500
    ctx->pc = 0x26C7B8u;
    SET_GPR_U32(ctx, 31, 0x26C7C0u);
    ctx->pc = 0x26F500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F500u, 0x26C7B8u, 0x26C7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C7C0u;
label_26c7c0:
    // 0x26c7c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26c7c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c7c4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c7c8: 0x24440088  addiu       $a0, $v0, 0x88
    ctx->pc = 0x26c7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x26c7cc: 0xc04808c  jal         func_120230
    ctx->pc = 0x26C7CCu;
    SET_GPR_U32(ctx, 31, 0x26C7D4u);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26C7CCu, 0x26C7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C7D4u;
label_26c7d4:
    // 0x26c7d4: 0x1202005a  beq         $s0, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x26C7D4u;
    {
        const bool branch_taken_0x26c7d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x26c7d4) {
            ctx->pc = 0x26C940u;
            goto label_26c940;
        }
    }
    ctx->pc = 0x26C7DCu;
    // 0x26c7dc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26c7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c7e0: 0x24440088  addiu       $a0, $v0, 0x88
    ctx->pc = 0x26c7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x26c7e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26c7e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c7e8: 0xc09b258  jal         func_26C960
    ctx->pc = 0x26C7E8u;
    SET_GPR_U32(ctx, 31, 0x26C7F0u);
    ctx->pc = 0x26C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C960u, 0x26C7E8u, 0x26C7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C7F0u;
label_26c7f0:
    // 0x26c7f0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x26C7F0u;
    {
        const bool branch_taken_0x26c7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c7f0) {
            ctx->pc = 0x26C940u;
            goto label_26c940;
        }
    }
    ctx->pc = 0x26C7F8u;
label_26c7f8:
    // 0x26c7f8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c7fc: 0x24440094  addiu       $a0, $v0, 0x94
    ctx->pc = 0x26c7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x26c800: 0xc04809c  jal         func_120270
    ctx->pc = 0x26C800u;
    SET_GPR_U32(ctx, 31, 0x26C808u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x26C800u, 0x26C808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C808u;
label_26c808:
    // 0x26c808: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26c808u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c80c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c810: 0x24440094  addiu       $a0, $v0, 0x94
    ctx->pc = 0x26c810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x26c814: 0xc04808c  jal         func_120230
    ctx->pc = 0x26C814u;
    SET_GPR_U32(ctx, 31, 0x26C81Cu);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26C814u, 0x26C81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C81Cu;
label_26c81c:
    // 0x26c81c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26c81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c820: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26c820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c824: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x26c824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26c828: 0xc09bd40  jal         func_26F500
    ctx->pc = 0x26C828u;
    SET_GPR_U32(ctx, 31, 0x26C830u);
    ctx->pc = 0x26F500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F500u, 0x26C828u, 0x26C830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C830u;
label_26c830:
    // 0x26c830: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26c830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c834: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26c834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c838: 0x24440094  addiu       $a0, $v0, 0x94
    ctx->pc = 0x26c838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x26c83c: 0xc04808c  jal         func_120230
    ctx->pc = 0x26C83Cu;
    SET_GPR_U32(ctx, 31, 0x26C844u);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26C83Cu, 0x26C844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C844u;
label_26c844:
    // 0x26c844: 0x1202003e  beq         $s0, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x26C844u;
    {
        const bool branch_taken_0x26c844 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x26c844) {
            ctx->pc = 0x26C940u;
            goto label_26c940;
        }
    }
    ctx->pc = 0x26C84Cu;
    // 0x26c84c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26c84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c850: 0x24440094  addiu       $a0, $v0, 0x94
    ctx->pc = 0x26c850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x26c854: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26c854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c858: 0xc09b258  jal         func_26C960
    ctx->pc = 0x26C858u;
    SET_GPR_U32(ctx, 31, 0x26C860u);
    ctx->pc = 0x26C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C960u, 0x26C858u, 0x26C860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C860u;
label_26c860:
    // 0x26c860: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x26C860u;
    {
        const bool branch_taken_0x26c860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c860) {
            ctx->pc = 0x26C940u;
            goto label_26c940;
        }
    }
    ctx->pc = 0x26C868u;
label_26c868:
    // 0x26c868: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26c868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c86c: 0x244400a0  addiu       $a0, $v0, 0xA0
    ctx->pc = 0x26c86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x26c870: 0xc04809c  jal         func_120270
    ctx->pc = 0x26C870u;
    SET_GPR_U32(ctx, 31, 0x26C878u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x26C870u, 0x26C878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C878u;
label_26c878:
    // 0x26c878: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26c878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c87c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c880: 0x244400a0  addiu       $a0, $v0, 0xA0
    ctx->pc = 0x26c880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x26c884: 0xc04808c  jal         func_120230
    ctx->pc = 0x26C884u;
    SET_GPR_U32(ctx, 31, 0x26C88Cu);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26C884u, 0x26C88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C88Cu;
label_26c88c:
    // 0x26c88c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26c88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c890: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26c890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c894: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x26c894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26c898: 0xc09bd40  jal         func_26F500
    ctx->pc = 0x26C898u;
    SET_GPR_U32(ctx, 31, 0x26C8A0u);
    ctx->pc = 0x26F500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F500u, 0x26C898u, 0x26C8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C8A0u;
label_26c8a0:
    // 0x26c8a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26c8a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c8a4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26c8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c8a8: 0x244400a0  addiu       $a0, $v0, 0xA0
    ctx->pc = 0x26c8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x26c8ac: 0xc04808c  jal         func_120230
    ctx->pc = 0x26C8ACu;
    SET_GPR_U32(ctx, 31, 0x26C8B4u);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26C8ACu, 0x26C8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C8B4u;
label_26c8b4:
    // 0x26c8b4: 0x12020022  beq         $s0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x26C8B4u;
    {
        const bool branch_taken_0x26c8b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x26c8b4) {
            ctx->pc = 0x26C940u;
            goto label_26c940;
        }
    }
    ctx->pc = 0x26C8BCu;
    // 0x26c8bc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26c8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c8c0: 0x244400a0  addiu       $a0, $v0, 0xA0
    ctx->pc = 0x26c8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x26c8c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26c8c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c8c8: 0xc09b258  jal         func_26C960
    ctx->pc = 0x26C8C8u;
    SET_GPR_U32(ctx, 31, 0x26C8D0u);
    ctx->pc = 0x26C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C960u, 0x26C8C8u, 0x26C8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C8D0u;
label_26c8d0:
    // 0x26c8d0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x26C8D0u;
    {
        const bool branch_taken_0x26c8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c8d0) {
            ctx->pc = 0x26C940u;
            goto label_26c940;
        }
    }
    ctx->pc = 0x26C8D8u;
label_26c8d8:
    // 0x26c8d8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26c8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c8dc: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x26c8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x26c8e0: 0xc04809c  jal         func_120270
    ctx->pc = 0x26C8E0u;
    SET_GPR_U32(ctx, 31, 0x26C8E8u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x26C8E0u, 0x26C8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C8E8u;
label_26c8e8:
    // 0x26c8e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26c8e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c8ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c8f0: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x26c8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x26c8f4: 0xc04808c  jal         func_120230
    ctx->pc = 0x26C8F4u;
    SET_GPR_U32(ctx, 31, 0x26C8FCu);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26C8F4u, 0x26C8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C8FCu;
label_26c8fc:
    // 0x26c8fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26c8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c900: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26c900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c904: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x26c904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26c908: 0xc09bd40  jal         func_26F500
    ctx->pc = 0x26C908u;
    SET_GPR_U32(ctx, 31, 0x26C910u);
    ctx->pc = 0x26F500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F500u, 0x26C908u, 0x26C910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C910u;
label_26c910:
    // 0x26c910: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26c910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c914: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26c914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c918: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x26c918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x26c91c: 0xc04808c  jal         func_120230
    ctx->pc = 0x26C91Cu;
    SET_GPR_U32(ctx, 31, 0x26C924u);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26C91Cu, 0x26C924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C924u;
label_26c924:
    // 0x26c924: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26C924u;
    {
        const bool branch_taken_0x26c924 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x26c924) {
            ctx->pc = 0x26C940u;
            goto label_26c940;
        }
    }
    ctx->pc = 0x26C92Cu;
    // 0x26c92c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26c92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c930: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x26c930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x26c934: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26c934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c938: 0xc09b258  jal         func_26C960
    ctx->pc = 0x26C938u;
    SET_GPR_U32(ctx, 31, 0x26C940u);
    ctx->pc = 0x26C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C960u, 0x26C938u, 0x26C940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C940u;
label_26c940:
    // 0x26c940: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26c940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c944: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26c944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c948: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26c948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c94c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x26c94cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26c950: 0x3e00008  jr          $ra
    ctx->pc = 0x26C950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C958u;
    // 0x26c958: 0x0  nop
    ctx->pc = 0x26c958u;
    // NOP
    // 0x26c95c: 0x0  nop
    ctx->pc = 0x26c95cu;
    // NOP
    ctx->pc = 0x26c960u;
}
