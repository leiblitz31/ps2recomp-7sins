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

// Function: sub_0010C6B0
// Address: 0x10c6b0 - 0x10c8b0
void sub_0010C6B0_0x10c6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C6B0_0x10c6b0");
#endif

    switch (ctx->pc) {
        case 0x10c6b0u: goto label_10c6b0;
        case 0x10c6b4u: goto label_10c6b4;
        case 0x10c6b8u: goto label_10c6b8;
        case 0x10c6bcu: goto label_10c6bc;
        case 0x10c6c0u: goto label_10c6c0;
        case 0x10c6c4u: goto label_10c6c4;
        case 0x10c6c8u: goto label_10c6c8;
        case 0x10c6ccu: goto label_10c6cc;
        case 0x10c6d0u: goto label_10c6d0;
        case 0x10c6d4u: goto label_10c6d4;
        case 0x10c6d8u: goto label_10c6d8;
        case 0x10c6dcu: goto label_10c6dc;
        case 0x10c6e0u: goto label_10c6e0;
        case 0x10c6e4u: goto label_10c6e4;
        case 0x10c6e8u: goto label_10c6e8;
        case 0x10c6ecu: goto label_10c6ec;
        case 0x10c6f0u: goto label_10c6f0;
        case 0x10c6f4u: goto label_10c6f4;
        case 0x10c6f8u: goto label_10c6f8;
        case 0x10c6fcu: goto label_10c6fc;
        case 0x10c700u: goto label_10c700;
        case 0x10c704u: goto label_10c704;
        case 0x10c708u: goto label_10c708;
        case 0x10c70cu: goto label_10c70c;
        case 0x10c710u: goto label_10c710;
        case 0x10c714u: goto label_10c714;
        case 0x10c718u: goto label_10c718;
        case 0x10c71cu: goto label_10c71c;
        case 0x10c720u: goto label_10c720;
        case 0x10c724u: goto label_10c724;
        case 0x10c728u: goto label_10c728;
        case 0x10c72cu: goto label_10c72c;
        case 0x10c730u: goto label_10c730;
        case 0x10c734u: goto label_10c734;
        case 0x10c738u: goto label_10c738;
        case 0x10c73cu: goto label_10c73c;
        case 0x10c740u: goto label_10c740;
        case 0x10c744u: goto label_10c744;
        case 0x10c748u: goto label_10c748;
        case 0x10c74cu: goto label_10c74c;
        case 0x10c750u: goto label_10c750;
        case 0x10c754u: goto label_10c754;
        case 0x10c758u: goto label_10c758;
        case 0x10c75cu: goto label_10c75c;
        case 0x10c760u: goto label_10c760;
        case 0x10c764u: goto label_10c764;
        case 0x10c768u: goto label_10c768;
        case 0x10c76cu: goto label_10c76c;
        case 0x10c770u: goto label_10c770;
        case 0x10c774u: goto label_10c774;
        case 0x10c778u: goto label_10c778;
        case 0x10c77cu: goto label_10c77c;
        case 0x10c780u: goto label_10c780;
        case 0x10c784u: goto label_10c784;
        case 0x10c788u: goto label_10c788;
        case 0x10c78cu: goto label_10c78c;
        case 0x10c790u: goto label_10c790;
        case 0x10c794u: goto label_10c794;
        case 0x10c798u: goto label_10c798;
        case 0x10c79cu: goto label_10c79c;
        case 0x10c7a0u: goto label_10c7a0;
        case 0x10c7a4u: goto label_10c7a4;
        case 0x10c7a8u: goto label_10c7a8;
        case 0x10c7acu: goto label_10c7ac;
        case 0x10c7b0u: goto label_10c7b0;
        case 0x10c7b4u: goto label_10c7b4;
        case 0x10c7b8u: goto label_10c7b8;
        case 0x10c7bcu: goto label_10c7bc;
        case 0x10c7c0u: goto label_10c7c0;
        case 0x10c7c4u: goto label_10c7c4;
        case 0x10c7c8u: goto label_10c7c8;
        case 0x10c7ccu: goto label_10c7cc;
        case 0x10c7d0u: goto label_10c7d0;
        case 0x10c7d4u: goto label_10c7d4;
        case 0x10c7d8u: goto label_10c7d8;
        case 0x10c7dcu: goto label_10c7dc;
        case 0x10c7e0u: goto label_10c7e0;
        case 0x10c7e4u: goto label_10c7e4;
        case 0x10c7e8u: goto label_10c7e8;
        case 0x10c7ecu: goto label_10c7ec;
        case 0x10c7f0u: goto label_10c7f0;
        case 0x10c7f4u: goto label_10c7f4;
        case 0x10c7f8u: goto label_10c7f8;
        case 0x10c7fcu: goto label_10c7fc;
        case 0x10c800u: goto label_10c800;
        case 0x10c804u: goto label_10c804;
        case 0x10c808u: goto label_10c808;
        case 0x10c80cu: goto label_10c80c;
        case 0x10c810u: goto label_10c810;
        case 0x10c814u: goto label_10c814;
        case 0x10c818u: goto label_10c818;
        case 0x10c81cu: goto label_10c81c;
        case 0x10c820u: goto label_10c820;
        case 0x10c824u: goto label_10c824;
        case 0x10c828u: goto label_10c828;
        case 0x10c82cu: goto label_10c82c;
        case 0x10c830u: goto label_10c830;
        case 0x10c834u: goto label_10c834;
        case 0x10c838u: goto label_10c838;
        case 0x10c83cu: goto label_10c83c;
        case 0x10c840u: goto label_10c840;
        case 0x10c844u: goto label_10c844;
        case 0x10c848u: goto label_10c848;
        case 0x10c84cu: goto label_10c84c;
        case 0x10c850u: goto label_10c850;
        case 0x10c854u: goto label_10c854;
        case 0x10c858u: goto label_10c858;
        case 0x10c85cu: goto label_10c85c;
        case 0x10c860u: goto label_10c860;
        case 0x10c864u: goto label_10c864;
        case 0x10c868u: goto label_10c868;
        case 0x10c86cu: goto label_10c86c;
        case 0x10c870u: goto label_10c870;
        case 0x10c874u: goto label_10c874;
        case 0x10c878u: goto label_10c878;
        case 0x10c87cu: goto label_10c87c;
        case 0x10c880u: goto label_10c880;
        case 0x10c884u: goto label_10c884;
        case 0x10c888u: goto label_10c888;
        case 0x10c88cu: goto label_10c88c;
        case 0x10c890u: goto label_10c890;
        case 0x10c894u: goto label_10c894;
        case 0x10c898u: goto label_10c898;
        case 0x10c89cu: goto label_10c89c;
        case 0x10c8a0u: goto label_10c8a0;
        case 0x10c8a4u: goto label_10c8a4;
        case 0x10c8a8u: goto label_10c8a8;
        case 0x10c8acu: goto label_10c8ac;
        default: break;
    }

    ctx->pc = 0x10c6b0u;

label_10c6b0:
    // 0x10c6b0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x10c6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_10c6b4:
    // 0x10c6b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10c6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_10c6b8:
    // 0x10c6b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x10c6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_10c6bc:
    // 0x10c6bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x10c6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_10c6c0:
    // 0x10c6c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10c6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_10c6c4:
    // 0x10c6c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10c6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_10c6c8:
    // 0x10c6c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10c6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10c6cc:
    // 0x10c6cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10c6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10c6d0:
    // 0x10c6d0: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x10c6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
label_10c6d4:
    // 0x10c6d4: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x10c6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
label_10c6d8:
    // 0x10c6d8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x10c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_10c6dc:
    // 0x10c6dc: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x10c6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_10c6e0:
    // 0x10c6e0: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x10c6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_10c6e4:
    // 0x10c6e4: 0xc044da4  jal         func_113690
label_10c6e8:
    if (ctx->pc == 0x10C6E8u) {
        ctx->pc = 0x10C6ECu;
        goto label_10c6ec;
    }
    ctx->pc = 0x10C6E4u;
    SET_GPR_U32(ctx, 31, 0x10C6ECu);
    ctx->pc = 0x113690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113690u, 0x10C6E4u, 0x10C6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C6ECu;
label_10c6ec:
    // 0x10c6ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10c6ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c6f0:
    // 0x10c6f0: 0x14120011  bne         $zero, $s2, . + 4 + (0x11 << 2)
label_10c6f4:
    if (ctx->pc == 0x10C6F4u) {
        ctx->pc = 0x10C6F8u;
        goto label_10c6f8;
    }
    ctx->pc = 0x10C6F0u;
    {
        const bool branch_taken_0x10c6f0 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 18));
        if (branch_taken_0x10c6f0) {
            ctx->pc = 0x10C738u;
            goto label_10c738;
        }
    }
    ctx->pc = 0x10C6F8u;
label_10c6f8:
    // 0x10c6f8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x10c6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_10c6fc:
    // 0x10c6fc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x10c6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_10c700:
    // 0x10c700: 0x24a51740  addiu       $a1, $a1, 0x1740
    ctx->pc = 0x10c700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
label_10c704:
    // 0x10c704: 0xc040304  jal         func_100C10
label_10c708:
    if (ctx->pc == 0x10C708u) {
        ctx->pc = 0x10C70Cu;
        goto label_10c70c;
    }
    ctx->pc = 0x10C704u;
    SET_GPR_U32(ctx, 31, 0x10C70Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x10C704u, 0x10C70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C70Cu;
label_10c70c:
    // 0x10c70c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x10c70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_10c710:
    // 0x10c710: 0xc1163b8  jal         func_458EE0
label_10c714:
    if (ctx->pc == 0x10C714u) {
        ctx->pc = 0x10C718u;
        goto label_10c718;
    }
    ctx->pc = 0x10C710u;
    SET_GPR_U32(ctx, 31, 0x10C718u);
    ctx->pc = 0x458EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x458EE0u, 0x10C710u, 0x10C718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C718u;
label_10c718:
    // 0x10c718: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x10c718u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c71c:
    // 0x10c71c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x10c71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_10c720:
    // 0x10c720: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x10c720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10c724:
    // 0x10c724: 0xc0402d4  jal         func_100B50
label_10c728:
    if (ctx->pc == 0x10C728u) {
        ctx->pc = 0x10C72Cu;
        goto label_10c72c;
    }
    ctx->pc = 0x10C724u;
    SET_GPR_U32(ctx, 31, 0x10C72Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x10C724u, 0x10C72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C72Cu;
label_10c72c:
    // 0x10c72c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10c72cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10c730:
    // 0x10c730: 0x10000054  b           . + 4 + (0x54 << 2)
label_10c734:
    if (ctx->pc == 0x10C734u) {
        ctx->pc = 0x10C738u;
        goto label_10c738;
    }
    ctx->pc = 0x10C730u;
    {
        const bool branch_taken_0x10c730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c730) {
            ctx->pc = 0x10C884u;
            goto label_10c884;
        }
    }
    ctx->pc = 0x10C738u;
label_10c738:
    // 0x10c738: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x10c738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_10c73c:
    // 0x10c73c: 0xc119b68  jal         func_466DA0
label_10c740:
    if (ctx->pc == 0x10C740u) {
        ctx->pc = 0x10C744u;
        goto label_10c744;
    }
    ctx->pc = 0x10C73Cu;
    SET_GPR_U32(ctx, 31, 0x10C744u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x10C73Cu, 0x10C744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C744u;
label_10c744:
    // 0x10c744: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x10c744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_10c748:
    // 0x10c748: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10c748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c74c:
    // 0x10c74c: 0xc0400e0  jal         func_100380
label_10c750:
    if (ctx->pc == 0x10C750u) {
        ctx->pc = 0x10C754u;
        goto label_10c754;
    }
    ctx->pc = 0x10C74Cu;
    SET_GPR_U32(ctx, 31, 0x10C754u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x10C74Cu, 0x10C754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C754u;
label_10c754:
    // 0x10c754: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10c754u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c758:
    // 0x10c758: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_10c75c:
    if (ctx->pc == 0x10C75Cu) {
        ctx->pc = 0x10C760u;
        goto label_10c760;
    }
    ctx->pc = 0x10C758u;
    {
        const bool branch_taken_0x10c758 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c758) {
            ctx->pc = 0x10C770u;
            goto label_10c770;
        }
    }
    ctx->pc = 0x10C760u;
label_10c760:
    // 0x10c760: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10c760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10c764:
    // 0x10c764: 0xc09121c  jal         func_244870
label_10c768:
    if (ctx->pc == 0x10C768u) {
        ctx->pc = 0x10C76Cu;
        goto label_10c76c;
    }
    ctx->pc = 0x10C764u;
    SET_GPR_U32(ctx, 31, 0x10C76Cu);
    ctx->pc = 0x244870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244870u, 0x10C764u, 0x10C76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C76Cu;
label_10c76c:
    // 0x10c76c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10c76cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c770:
    // 0x10c770: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x10c770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10c774:
    // 0x10c774: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10c774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10c778:
    // 0x10c778: 0xc0457d0  jal         func_115F40
label_10c77c:
    if (ctx->pc == 0x10C77Cu) {
        ctx->pc = 0x10C780u;
        goto label_10c780;
    }
    ctx->pc = 0x10C778u;
    SET_GPR_U32(ctx, 31, 0x10C780u);
    ctx->pc = 0x115F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115F40u, 0x10C778u, 0x10C780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C780u;
label_10c780:
    // 0x10c780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10c784:
    // 0x10c784: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10c784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c788:
    // 0x10c788: 0xc085524  jal         func_215490
label_10c78c:
    if (ctx->pc == 0x10C78Cu) {
        ctx->pc = 0x10C790u;
        goto label_10c790;
    }
    ctx->pc = 0x10C788u;
    SET_GPR_U32(ctx, 31, 0x10C790u);
    ctx->pc = 0x215490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215490u, 0x10C788u, 0x10C790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C790u;
label_10c790:
    // 0x10c790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10c794:
    // 0x10c794: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x10c794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_10c798:
    // 0x10c798: 0xc091394  jal         func_244E50
label_10c79c:
    if (ctx->pc == 0x10C79Cu) {
        ctx->pc = 0x10C7A0u;
        goto label_10c7a0;
    }
    ctx->pc = 0x10C798u;
    SET_GPR_U32(ctx, 31, 0x10C7A0u);
    ctx->pc = 0x244E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E50u, 0x10C798u, 0x10C7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C7A0u;
label_10c7a0:
    // 0x10c7a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10c7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10c7a4:
    // 0x10c7a4: 0xc0457e0  jal         func_115F80
label_10c7a8:
    if (ctx->pc == 0x10C7A8u) {
        ctx->pc = 0x10C7ACu;
        goto label_10c7ac;
    }
    ctx->pc = 0x10C7A4u;
    SET_GPR_U32(ctx, 31, 0x10C7ACu);
    ctx->pc = 0x115F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115F80u, 0x10C7A4u, 0x10C7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C7ACu;
label_10c7ac:
    // 0x10c7ac: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x10c7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_10c7b0:
    // 0x10c7b0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x10c7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_10c7b4:
    // 0x10c7b4: 0x278684e8  addiu       $a2, $gp, -0x7B18
    ctx->pc = 0x10c7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935784));
label_10c7b8:
    // 0x10c7b8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x10c7b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c7bc:
    // 0x10c7bc: 0xc0bc398  jal         func_2F0E60
label_10c7c0:
    if (ctx->pc == 0x10C7C0u) {
        ctx->pc = 0x10C7C4u;
        goto label_10c7c4;
    }
    ctx->pc = 0x10C7BCu;
    SET_GPR_U32(ctx, 31, 0x10C7C4u);
    ctx->pc = 0x2F0E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0E60u, 0x10C7BCu, 0x10C7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C7C4u;
label_10c7c4:
    // 0x10c7c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10c7c8:
    // 0x10c7c8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x10c7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_10c7cc:
    // 0x10c7cc: 0xc04322c  jal         func_10C8B0
label_10c7d0:
    if (ctx->pc == 0x10C7D0u) {
        ctx->pc = 0x10C7D4u;
        goto label_10c7d4;
    }
    ctx->pc = 0x10C7CCu;
    SET_GPR_U32(ctx, 31, 0x10C7D4u);
    ctx->pc = 0x10C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C8B0u, 0x10C7CCu, 0x10C7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C7D4u;
label_10c7d4:
    // 0x10c7d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10c7d8:
    // 0x10c7d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10c7d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10c7dc:
    // 0x10c7dc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x10c7dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_10c7e0:
    // 0x10c7e0: 0x320f809  jalr        $t9
label_10c7e4:
    if (ctx->pc == 0x10C7E4u) {
        ctx->pc = 0x10C7E8u;
        goto label_10c7e8;
    }
    ctx->pc = 0x10C7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10C7E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C7E0u, 0x10C7E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10C7E8u;
label_10c7e8:
    // 0x10c7e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10c7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10c7ec:
    // 0x10c7ec: 0xc0457d0  jal         func_115F40
label_10c7f0:
    if (ctx->pc == 0x10C7F0u) {
        ctx->pc = 0x10C7F4u;
        goto label_10c7f4;
    }
    ctx->pc = 0x10C7ECu;
    SET_GPR_U32(ctx, 31, 0x10C7F4u);
    ctx->pc = 0x115F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115F40u, 0x10C7ECu, 0x10C7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C7F4u;
label_10c7f4:
    // 0x10c7f4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x10c7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_10c7f8:
    // 0x10c7f8: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x10c7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_10c7fc:
    // 0x10c7fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10c7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c800:
    // 0x10c800: 0xc0445c0  jal         func_111700
label_10c804:
    if (ctx->pc == 0x10C804u) {
        ctx->pc = 0x10C808u;
        goto label_10c808;
    }
    ctx->pc = 0x10C800u;
    SET_GPR_U32(ctx, 31, 0x10C808u);
    ctx->pc = 0x111700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111700u, 0x10C800u, 0x10C808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C808u;
label_10c808:
    // 0x10c808: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10c808u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c80c:
    // 0x10c80c: 0x14130003  bne         $zero, $s3, . + 4 + (0x3 << 2)
label_10c810:
    if (ctx->pc == 0x10C810u) {
        ctx->pc = 0x10C814u;
        goto label_10c814;
    }
    ctx->pc = 0x10C80Cu;
    {
        const bool branch_taken_0x10c80c = (GPR_U64(ctx, 0) != GPR_U64(ctx, 19));
        if (branch_taken_0x10c80c) {
            ctx->pc = 0x10C81Cu;
            goto label_10c81c;
        }
    }
    ctx->pc = 0x10C814u;
label_10c814:
    // 0x10c814: 0x10000014  b           . + 4 + (0x14 << 2)
label_10c818:
    if (ctx->pc == 0x10C818u) {
        ctx->pc = 0x10C81Cu;
        goto label_10c81c;
    }
    ctx->pc = 0x10C814u;
    {
        const bool branch_taken_0x10c814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c814) {
            ctx->pc = 0x10C868u;
            goto label_10c868;
        }
    }
    ctx->pc = 0x10C81Cu;
label_10c81c:
    // 0x10c81c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10c81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10c820:
    // 0x10c820: 0xc044844  jal         func_112110
label_10c824:
    if (ctx->pc == 0x10C824u) {
        ctx->pc = 0x10C828u;
        goto label_10c828;
    }
    ctx->pc = 0x10C820u;
    SET_GPR_U32(ctx, 31, 0x10C828u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10C820u, 0x10C828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C828u;
label_10c828:
    // 0x10c828: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x10c828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_10c82c:
    // 0x10c82c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x10c82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_10c830:
    // 0x10c830: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10c830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10c834:
    // 0x10c834: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10c834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c838:
    // 0x10c838: 0xc040f94  jal         func_103E50
label_10c83c:
    if (ctx->pc == 0x10C83Cu) {
        ctx->pc = 0x10C840u;
        goto label_10c840;
    }
    ctx->pc = 0x10C838u;
    SET_GPR_U32(ctx, 31, 0x10C840u);
    ctx->pc = 0x103E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103E50u, 0x10C838u, 0x10C840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C840u;
label_10c840:
    // 0x10c840: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x10c840u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10c844:
    // 0x10c844: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x10c844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_10c848:
    // 0x10c848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10c848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10c84c:
    // 0x10c84c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_10c850:
    if (ctx->pc == 0x10C850u) {
        ctx->pc = 0x10C854u;
        goto label_10c854;
    }
    ctx->pc = 0x10C84Cu;
    {
        const bool branch_taken_0x10c84c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10c84c) {
            ctx->pc = 0x10C85Cu;
            goto label_10c85c;
        }
    }
    ctx->pc = 0x10C854u;
label_10c854:
    // 0x10c854: 0x10000004  b           . + 4 + (0x4 << 2)
label_10c858:
    if (ctx->pc == 0x10C858u) {
        ctx->pc = 0x10C85Cu;
        goto label_10c85c;
    }
    ctx->pc = 0x10C854u;
    {
        const bool branch_taken_0x10c854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c854) {
            ctx->pc = 0x10C868u;
            goto label_10c868;
        }
    }
    ctx->pc = 0x10C85Cu;
label_10c85c:
    // 0x10c85c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10c85cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10c860:
    // 0x10c860: 0x10000008  b           . + 4 + (0x8 << 2)
label_10c864:
    if (ctx->pc == 0x10C864u) {
        ctx->pc = 0x10C868u;
        goto label_10c868;
    }
    ctx->pc = 0x10C860u;
    {
        const bool branch_taken_0x10c860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c860) {
            ctx->pc = 0x10C884u;
            goto label_10c884;
        }
    }
    ctx->pc = 0x10C868u;
label_10c868:
    // 0x10c868: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x10c868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_10c86c:
    // 0x10c86c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10c86cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10c870:
    // 0x10c870: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10c870u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10c874:
    // 0x10c874: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x10c874u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_10c878:
    // 0x10c878: 0x320f809  jalr        $t9
label_10c87c:
    if (ctx->pc == 0x10C87Cu) {
        ctx->pc = 0x10C880u;
        goto label_10c880;
    }
    ctx->pc = 0x10C878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10C880u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C878u, 0x10C880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10C880u;
label_10c880:
    // 0x10c880: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10c880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10c884:
    // 0x10c884: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10c884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_10c888:
    // 0x10c888: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x10c888u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_10c88c:
    // 0x10c88c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x10c88cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_10c890:
    // 0x10c890: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10c890u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10c894:
    // 0x10c894: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10c894u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10c898:
    // 0x10c898: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10c898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10c89c:
    // 0x10c89c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10c89cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10c8a0:
    // 0x10c8a0: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x10c8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_10c8a4:
    // 0x10c8a4: 0x3e00008  jr          $ra
label_10c8a8:
    if (ctx->pc == 0x10C8A8u) {
        ctx->pc = 0x10C8ACu;
        goto label_10c8ac;
    }
    ctx->pc = 0x10C8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C8ACu;
label_10c8ac:
    // 0x10c8ac: 0x0  nop
    ctx->pc = 0x10c8acu;
    // NOP
    ctx->pc = 0x10c8b0u;
}
