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

// Function: sub_001595B0
// Address: 0x1595b0 - 0x1597c0
void sub_001595B0_0x1595b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001595B0_0x1595b0");
#endif

    switch (ctx->pc) {
        case 0x159620u: goto label_159620;
        case 0x159630u: goto label_159630;
        case 0x159648u: goto label_159648;
        case 0x159660u: goto label_159660;
        case 0x159670u: goto label_159670;
        case 0x159690u: goto label_159690;
        case 0x1596a0u: goto label_1596a0;
        case 0x1596b8u: goto label_1596b8;
        case 0x1596d0u: goto label_1596d0;
        case 0x1596ecu: goto label_1596ec;
        case 0x1596fcu: goto label_1596fc;
        case 0x15970cu: goto label_15970c;
        case 0x159724u: goto label_159724;
        case 0x159734u: goto label_159734;
        case 0x159744u: goto label_159744;
        case 0x159754u: goto label_159754;
        case 0x159770u: goto label_159770;
        case 0x159790u: goto label_159790;
        default: break;
    }

    ctx->pc = 0x1595b0u;

    // 0x1595b0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1595b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1595b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1595b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1595b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1595b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1595bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1595bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1595c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1595c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1595c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1595c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1595c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1595c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1595cc: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1595ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x1595d0: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x1595d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x1595d4: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x1595d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x1595d8: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x1595d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x1595dc: 0xafa800b0  sw          $t0, 0xB0($sp)
    ctx->pc = 0x1595dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 8));
    // 0x1595e0: 0xafa900c0  sw          $t1, 0xC0($sp)
    ctx->pc = 0x1595e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
    // 0x1595e4: 0x8fb300c0  lw          $s3, 0xC0($sp)
    ctx->pc = 0x1595e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1595e8: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x1595e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1595ec: 0x8fb100a0  lw          $s1, 0xA0($sp)
    ctx->pc = 0x1595ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1595f0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1595f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1595f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1595f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1595f8: 0x12220015  beq         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1595F8u;
    {
        const bool branch_taken_0x1595f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1595f8) {
            ctx->pc = 0x159650u;
            goto label_159650;
        }
    }
    ctx->pc = 0x159600u;
    // 0x159600: 0x16600036  bnez        $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x159600u;
    {
        const bool branch_taken_0x159600 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x159600) {
            ctx->pc = 0x1596DCu;
            goto label_1596dc;
        }
    }
    ctx->pc = 0x159608u;
    // 0x159608: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x159608u;
    {
        const bool branch_taken_0x159608 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x159608) {
            ctx->pc = 0x159650u;
            goto label_159650;
        }
    }
    ctx->pc = 0x159610u;
    // 0x159610: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x159610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x159614: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x159614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x159618: 0xc0564d8  jal         func_159360
    ctx->pc = 0x159618u;
    SET_GPR_U32(ctx, 31, 0x159620u);
    ctx->pc = 0x159360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159360u, 0x159618u, 0x159620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159620u;
label_159620:
    // 0x159620: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x159620u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159624: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x159624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159628: 0xc0564c8  jal         func_159320
    ctx->pc = 0x159628u;
    SET_GPR_U32(ctx, 31, 0x159630u);
    ctx->pc = 0x159320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159320u, 0x159628u, 0x159630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159630u;
label_159630:
    // 0x159630: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x159630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x159634: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x159634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x159638: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x159638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x15963c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x15963cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159640: 0xc0564bc  jal         func_1592F0
    ctx->pc = 0x159640u;
    SET_GPR_U32(ctx, 31, 0x159648u);
    ctx->pc = 0x1592F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592F0u, 0x159640u, 0x159648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159648u;
label_159648:
    // 0x159648: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x159648u;
    {
        const bool branch_taken_0x159648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x159648) {
            ctx->pc = 0x1596DCu;
            goto label_1596dc;
        }
    }
    ctx->pc = 0x159650u;
label_159650:
    // 0x159650: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x159650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x159654: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x159654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x159658: 0xc0565f8  jal         func_1597E0
    ctx->pc = 0x159658u;
    SET_GPR_U32(ctx, 31, 0x159660u);
    ctx->pc = 0x1597E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1597E0u, 0x159658u, 0x159660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159660u;
label_159660:
    // 0x159660: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x159660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x159664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159668: 0xc0564b4  jal         func_1592D0
    ctx->pc = 0x159668u;
    SET_GPR_U32(ctx, 31, 0x159670u);
    ctx->pc = 0x1592D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592D0u, 0x159668u, 0x159670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159670u;
label_159670:
    // 0x159670: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x159670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x159674: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x159674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x159678: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x159678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15967c: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15967Cu;
    {
        const bool branch_taken_0x15967c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x15967c) {
            ctx->pc = 0x1596ACu;
            goto label_1596ac;
        }
    }
    ctx->pc = 0x159684u;
    // 0x159684: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x159684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x159688: 0xc0558a4  jal         func_156290
    ctx->pc = 0x159688u;
    SET_GPR_U32(ctx, 31, 0x159690u);
    ctx->pc = 0x156290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156290u, 0x159688u, 0x159690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159690u;
label_159690:
    // 0x159690: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x159690u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x159694: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x159694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x159698: 0xc05589c  jal         func_156270
    ctx->pc = 0x159698u;
    SET_GPR_U32(ctx, 31, 0x1596A0u);
    ctx->pc = 0x156270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156270u, 0x159698u, 0x1596A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1596A0u;
label_1596a0:
    // 0x1596a0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1596a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1596a4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1596A4u;
    {
        const bool branch_taken_0x1596a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1596a4) {
            ctx->pc = 0x159728u;
            goto label_159728;
        }
    }
    ctx->pc = 0x1596ACu;
label_1596ac:
    // 0x1596ac: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1596acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1596b0: 0xc055390  jal         func_154E40
    ctx->pc = 0x1596B0u;
    SET_GPR_U32(ctx, 31, 0x1596B8u);
    ctx->pc = 0x154E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154E40u, 0x1596B0u, 0x1596B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1596B8u;
label_1596b8:
    // 0x1596b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1596b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1596bc: 0x1622001a  bne         $s1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1596BCu;
    {
        const bool branch_taken_0x1596bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1596bc) {
            ctx->pc = 0x159728u;
            goto label_159728;
        }
    }
    ctx->pc = 0x1596C4u;
    // 0x1596c4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1596c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1596c8: 0xc055390  jal         func_154E40
    ctx->pc = 0x1596C8u;
    SET_GPR_U32(ctx, 31, 0x1596D0u);
    ctx->pc = 0x154E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154E40u, 0x1596C8u, 0x1596D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1596D0u;
label_1596d0:
    // 0x1596d0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1596d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1596d4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1596D4u;
    {
        const bool branch_taken_0x1596d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1596d4) {
            ctx->pc = 0x159728u;
            goto label_159728;
        }
    }
    ctx->pc = 0x1596DCu;
label_1596dc:
    // 0x1596dc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1596dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1596e0: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1596e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1596e4: 0xc0565f8  jal         func_1597E0
    ctx->pc = 0x1596E4u;
    SET_GPR_U32(ctx, 31, 0x1596ECu);
    ctx->pc = 0x1597E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1597E0u, 0x1596E4u, 0x1596ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1596ECu;
label_1596ec:
    // 0x1596ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1596ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1596f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1596f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1596f4: 0xc0564ac  jal         func_1592B0
    ctx->pc = 0x1596F4u;
    SET_GPR_U32(ctx, 31, 0x1596FCu);
    ctx->pc = 0x1592B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592B0u, 0x1596F4u, 0x1596FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1596FCu;
label_1596fc:
    // 0x1596fc: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1596fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x159700: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x159700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x159704: 0xc05589c  jal         func_156270
    ctx->pc = 0x159704u;
    SET_GPR_U32(ctx, 31, 0x15970Cu);
    ctx->pc = 0x156270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156270u, 0x159704u, 0x15970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15970Cu;
label_15970c:
    // 0x15970c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15970cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159710: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x159710u;
    {
        const bool branch_taken_0x159710 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x159710) {
            ctx->pc = 0x159728u;
            goto label_159728;
        }
    }
    ctx->pc = 0x159718u;
    // 0x159718: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x159718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15971c: 0xc05589c  jal         func_156270
    ctx->pc = 0x15971Cu;
    SET_GPR_U32(ctx, 31, 0x159724u);
    ctx->pc = 0x156270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156270u, 0x15971Cu, 0x159724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159724u;
label_159724:
    // 0x159724: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x159724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_159728:
    // 0x159728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x159728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15972c: 0xc0565f0  jal         func_1597C0
    ctx->pc = 0x15972Cu;
    SET_GPR_U32(ctx, 31, 0x159734u);
    ctx->pc = 0x1597C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1597C0u, 0x15972Cu, 0x159734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159734u;
label_159734:
    // 0x159734: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x159734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x159738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x159738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15973c: 0xc0564b4  jal         func_1592D0
    ctx->pc = 0x15973Cu;
    SET_GPR_U32(ctx, 31, 0x159744u);
    ctx->pc = 0x1592D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592D0u, 0x15973Cu, 0x159744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159744u;
label_159744:
    // 0x159744: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x159744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x159748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x159748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15974c: 0xc0564ac  jal         func_1592B0
    ctx->pc = 0x15974Cu;
    SET_GPR_U32(ctx, 31, 0x159754u);
    ctx->pc = 0x1592B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592B0u, 0x15974Cu, 0x159754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159754u;
label_159754:
    // 0x159754: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x159754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x159758: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x159758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15975c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15975cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x159760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159764: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x159764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x159768: 0xc042858  jal         func_10A160
    ctx->pc = 0x159768u;
    SET_GPR_U32(ctx, 31, 0x159770u);
    ctx->pc = 0x10A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A160u, 0x159768u, 0x159770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159770u;
label_159770:
    // 0x159770: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x159770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x159774: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x159774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x159778: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x159778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15977c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x15977cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x159780: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x159780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159784: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x159784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159788: 0xc0564a0  jal         func_159280
    ctx->pc = 0x159788u;
    SET_GPR_U32(ctx, 31, 0x159790u);
    ctx->pc = 0x159280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159280u, 0x159788u, 0x159790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159790u;
label_159790:
    // 0x159790: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x159790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x159794: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x159794u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x159798: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x159798u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15979c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15979cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1597a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1597a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1597a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1597a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1597a8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x1597a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1597ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1597ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1597ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1597B4u;
    // 0x1597b4: 0x0  nop
    ctx->pc = 0x1597b4u;
    // NOP
    // 0x1597b8: 0x0  nop
    ctx->pc = 0x1597b8u;
    // NOP
    // 0x1597bc: 0x0  nop
    ctx->pc = 0x1597bcu;
    // NOP
    ctx->pc = 0x1597c0u;
}
